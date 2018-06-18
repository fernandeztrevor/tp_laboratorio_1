#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"

void imprimirMenu()
{
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");
}

int numerico(char str[])
{
    int i=0;
    while(str[i] != '\0')
    {
        if(str[i] < '0' || str[i]>'9')
            return 0;
        i++;
    }
    return 1;
}

int letras(char str[])
{
    int i=0;
    while(str[i] != '\0')
    {
        if ((str[i] != ' ') && (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
            return 0;
        i++;
    }
    return 1;
}

int alfanumerico(char str[])
{
    int i=0;
    while(str[i] != '\0')
    {
        if((str[i] != ' ') && (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z') && (str[i] < '0' || str[i] > '9'))
            return 0;
        i++;
    }
    return 1;
}

void inicializar(persona listaPersonas[], int cantidad, int valor)
{
    int i;

    for (i=0; i<cantidad; i++)
    {
        listaPersonas[i].estado = valor;
    }
}

int obtenerEspacioLibre(persona listaPersonas[], int cantidad, int valor)
{
    int i;
    for (i=0; i<cantidad; i++)
    {
     if (listaPersonas[i].estado == valor)
     {
         return i;
     }
    }
    return -1;
}

void hardcodePersonas(persona listaPersonas[], int cantidad)
{
    char nombre[][20] = {"Lionel Messi","Paulo Dybala", "Gonzalo Higuaín","Sergio Aguero","Angel Dimaria","Javier Mascherano","Carlos Tevez","Sergio Romero","Ezequiel Lavezzi","Marcos Rojo","Nicolas Otamendi","Lucas Biglia","Ever Banega","Javier Pastore","Ezequiel Garay","Lautaro Martinez","Pablo Zabaleta","Fernando Gago","Erik Lamela","Diego Perotti"};
    int dni[] = {2,44,55,66,77,88,99,101,18,72,33,44,15,32,24,65,31,30,29,11};
    int edad[] = {16,17,21,28,45,14,56,36,56,34,15,18,22,39,12,16,17,21,28,45,14,56,36,56,34,15,18,22,39,12};
    for(int i=0;i<cantidad;i++)
    {
        strcpy(listaPersonas[i].nombre,nombre[i]);
        listaPersonas[i].edad = edad[i];
        listaPersonas[i].dni = dni[i];
        listaPersonas[i].estado = 1;
    }
}

void imprimirLista(persona listaPersonas[], int cantidad)
{
    for(int i=0; i<cantidad; i++)
                {
                    if(listaPersonas[i].estado == 1)
                        printf("%d -- %s -- %d -- %d\n", i+1, listaPersonas[i].nombre, listaPersonas[i].edad, listaPersonas[i].dni);
                }

}

void borraPersona (persona listaPersonas[], int cantidad)
{
                int i;

                printf("\n\n");
                scanf("%d", &i);

                if(listaPersonas[i].estado=!1)
                    {
                        printf("Legajo inexistente, reingrese:");
                        scanf("%d", &i);
                    }

                listaPersonas[i-1].estado=-1;

}

void imprimirListaAlfabetica(persona listaPersonas[], int cantidad)
{
                        persona auxiliarCompleto;

                     for(int i=0; i<cantidad; i++)
                    {
                        if(listaPersonas[i].estado==-1)
                        {
                            continue;
                        }
                        for(int j=i+1; j<cantidad; j++)
                        {
                            if(listaPersonas[i].estado==-1)
                        {
                            continue;
                        }
                        if(strcmp(listaPersonas[i].nombre,listaPersonas[j].nombre)>0)
                        {
                            auxiliarCompleto = listaPersonas[j];
                            listaPersonas[j] = listaPersonas[i];
                            listaPersonas[i] = auxiliarCompleto;
                        }
                        }

                    }
                  for(int i=0; i<cantidad; i++)
                {
                    if(listaPersonas[i].estado == 1)
                        printf("%s -- %d -- %d\n", listaPersonas[i].nombre, listaPersonas[i].edad, listaPersonas[i].dni);
                }
}

void graficar (persona listaPersonas[], int cantidad)
  {
    int i;
    int menor18=0;
    int de18a35=0;
    int mas35=0;
    char menor[cantidad][2];
    char joven[cantidad][2];
    char adulto[cantidad][2];
    int contador=0;

          for(i=0; i<cantidad; i++)
             {
                strcpy(menor[i] , " ");
                strcpy(joven[i] , " ");
                strcpy(adulto[i] , " ");
             }

            for(i=0; i<cantidad; i++)
            {
                if (listaPersonas[i].edad <=18 && listaPersonas[i].edad >0 && listaPersonas[i].estado ==1 )
                {
                    menor18++;
                }
                else if (listaPersonas[i].edad >18&& listaPersonas[i].edad <35 && listaPersonas[i].estado ==1 )
                         {
                    de18a35++;
                }
                else if ( listaPersonas[i].edad >35 && listaPersonas[i].estado ==1 )
                {
                    mas35++;
                }

            }

            for(i=0; i<menor18; i++)
            {
                if (i==0)
                {
                 strcpy(menor[i] , "*");
                }
                else{
                 strcpy(menor[i], "*") ;
                }

            }
            for(i=0; i<de18a35; i++)
            {
                if (i==0)
                {
                    strcpy(joven[i], "*");
                }
                else
                {
                   strcpy(joven[i], "*") ;
                }
            }
            for(i=0; i<mas35; i++)
            {
                if (i==0)
                {
                    strcpy(adulto[i], "*");
                }
                else{
                   strcpy(adulto[i], "*") ;
                }
            }
           if (menor18 <= de18a35)
           {
             contador = de18a35;
           }
           else if (de18a35<=mas35)
           {
           contador = mas35;
           }
           else
            {
             contador=menor18;
            }
            for(i=contador; i>=0; i--)
            {
              printf(" \n\t%s \t  %s\t %s", menor[i] , joven[i] , adulto[i]);
            }
          printf("\n       <18      18y35 \t>35 \n \n" );
    }
