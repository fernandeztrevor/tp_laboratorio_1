#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"

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

int imprimirLista(persona listaPersonas[], int cantidad, int j)
{
    int i;
    j=0;
    printf("\nIndice      Nombre      Edad        DNI\n");
    for(i=0; i<cantidad; i++)
                {

                    if(listaPersonas[i].estado == 1)
                    {
                        printf("%d.          %s        %d        %d\n", i+1, listaPersonas[i].nombre, listaPersonas[i].edad, listaPersonas[i].dni);
                        j++;
                    }
                }

    return j;
}

void imprimirListaVoid(persona listaPersonas[], int cantidad)
{
        int i;

       for(i=0; i<cantidad; i++)
                {
                    if(listaPersonas[i].estado == 1)
                        printf("%s -- %d -- %d\n", listaPersonas[i].nombre, listaPersonas[i].edad, listaPersonas[i].dni);
                }
}

void ordenAlfabetico (persona listaPersonas[], int cantidad)
{
            int i;
            int j;
            persona auxiliar;

                        for(i=0; i<cantidad; i++)
                    {
                        if(listaPersonas[i].estado==-1)
                        {
                            continue;
                        }
                        for(j=i+1; j<cantidad; j++)
                        {
                            if(listaPersonas[i].estado==-1)
                        {
                            continue;
                        }
                        if(strcmp(listaPersonas[i].nombre,listaPersonas[j].nombre)>0)
                        {
                            auxiliar = listaPersonas[j];
                            listaPersonas[j] = listaPersonas[i];
                            listaPersonas[i] = auxiliar;
                        }
                        }

                    }
}
