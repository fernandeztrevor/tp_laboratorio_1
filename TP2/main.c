#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "funciones.h"
#define cantidad 20
#define valor 0


int main()
{
    persona listaPersonas[cantidad];
    int espacioLibre;
    int resultadoBusqueda;
    char auxiliarNombre[20];
    char auxiliarEdadStr[3];
    char auxiliarDNIStr[10];
    int auxiliarEdad;
    int auxiliarDNI;
    char seguir='s';
    int opcion=0;
    char IStr[10];
    int i;
    int j;

    inicializar(listaPersonas, cantidad, valor);

    while(seguir=='s')
    {
        printf("\n1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                {
                    espacioLibre = obtenerEspacioLibre(listaPersonas, cantidad, valor);


                        if(espacioLibre==-1)
                        {
                            printf("No quedan lugares libres");
                            break;
                        }
                        else
                        {
                        printf("\nIngrese nombre:");
                        fflush(stdin);
                        gets(auxiliarNombre);
                        while (letras(auxiliarNombre)!=1)
                        {
                            printf("El nombre solo puede estar compuesto por letras, reingrese:\n");
                            gets(auxiliarNombre);
                        }

                        printf("\nIngrese edad:");
                        fflush(stdin);
                        gets(auxiliarEdadStr);
                        while (numerico(auxiliarEdadStr)!=1)
                        {
                            printf("La edad solo puede estar compuesta por números, reingrese:\n");
                            gets(auxiliarEdadStr);
                        }
                        auxiliarEdad=atoi(auxiliarEdadStr);

                        printf("\nIngrese DNI:");
                        fflush(stdin);
                        gets(auxiliarDNIStr);
                        while (numerico(auxiliarDNIStr)!=1)
                        {
                            printf("El DNI solo puede estar compuesta por números, reingrese:\n");
                            gets(auxiliarDNIStr);
                        }
                        auxiliarDNI=atoi(auxiliarDNIStr);

                        strcpy(listaPersonas[espacioLibre].nombre,auxiliarNombre);
                        listaPersonas[espacioLibre].edad=auxiliarEdad;
                        listaPersonas[espacioLibre].dni=auxiliarDNI;
                        listaPersonas[espacioLibre].estado=1;
                        }
                }
                break;

            case 2:
                {

                imprimirLista(listaPersonas, cantidad, j);

                if (j == 0)
                {
                    printf("No existen datos cargados");
                }
                else
                {
                   printf("\nIngrese el índice de la persona que desea borrar:\n");
                    fflush(stdin);
                    gets(IStr);


                while (numerico(IStr)!=1)
                {
                    printf("\nError. Debe ingresar el numero de legajo. Reingrese\n");
                        fflush(stdin);
                        gets(IStr);
                }

                i=atoi(IStr);

                if(listaPersonas[i-1].estado == valor)
                    {
                        printf("\nLegajo inexistente\n");
                    }
                    else
                    {
                        listaPersonas[i-1].estado = valor;
                    }
                }
                }
                break;
            case 3:
                {
                    ordenAlfabetico(listaPersonas, cantidad);

                    imprimirListaVoid(listaPersonas, cantidad);
                }

                break;
            case 4:
                break;
            case 5:
                seguir = 'n';
                break;
        }
    }

    return 0;
}
