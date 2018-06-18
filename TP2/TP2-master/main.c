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
    persona auxiliarCompleto;
    int espacioLibre;
    int resultadoBusqueda;
    char auxiliarNombre[20];
    char auxiliarEdadStr[3];
    char auxiliarDNIStr[10];
    int auxiliarEdad;
    int auxiliarDNI;
    char seguir='s';
    int opcion=0;
    int i;
    int j;
    printf("DEMORA EN LA ENTREGA DEBIDO A QUE TODAVÍA MI USUARIO NO ESTA DADO DE ALTA EN EL CAMPUS\n");
    inicializar(listaPersonas, cantidad, valor);
    hardcodePersonas(listaPersonas, cantidad);
    while(seguir=='s')
    {
        imprimirMenu();
        scanf("%d",&opcion);
        switch(opcion)
        {
            case 1:
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
                        }break;
            case 2:
                printf("\nSeleccione la persona que desea borrar:\n");
                imprimirLista(listaPersonas, cantidad);
                borraPersona(listaPersonas, cantidad);
                break;
            case 3:
                imprimirListaAlfabetica(listaPersonas, cantidad);
                break;
            case 4:
                graficar (listaPersonas, cantidad);
                break;
            case 5:
                seguir = 'n';
                break;
        }
    }return 0;
}
