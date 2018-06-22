#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

int agregarPelicula(EMovie movie[])
{
    int i;
    int j;
    int eleccion;
    char tituloAux[20];
    char generoAux[20];
    int duracionAux;
    char descripcionAux[50];
    int puntajeAux;
    char linkImagenAux[50];
    int salir = 0;

    i = buscaDisponible();
    do
    {
        if(j == 0)
        {
            printf("\nIngrese el titulo: \n");
            gets(tituloAux);
            printf("\nSeleccione genero:\n- Accion\n- Aventura\n- Terror\n- Romantica\n- Comedia\n- Infantil\n- Otros");
            gets(generoAux);
            printf("\nIngrese la duracion (en minutos):\n");
            scanf("%d", duracionAux);
            printf("\nIngrese la descripcion:\n");
            gets(descripcionAux);
            printf("\nIngrese el puntaje (1-5):\n");
            scanf("%d", puntajeAux);
            printf("\nIngrese la ubicacion de la imagen:\n");
            gets(linkImagenAux);
        }


    system("clear");
    printf("=========================PREVISUALIZACION=========================");
    printf("\n1- Titulo: %s\n", tituloAux);
    printf("2- Genero: %s\n", generoAux);
    printf("3- Duracion: %d min.\n", duracionAux);
    printf("4- Descripcion: %s\n", descripcionAux);
    printf("5- Puntaje: %d\n", puntajeAux);
    printf("\n\nSi desea modificar alguna instancia presione el numero indicador, si quiere confirmar y guardar presione 9");

    switch(eleccion)
    {
    case 1:
        printf("\nIngrese el titulo: \n");
        gets(tituloAux);
        break;
    case 2:
        printf("\nSeleccione genero:\n- Accion\n- Aventura\n- Terror\n- Romantica\n- Comedia\n- Infantil\n- Otros");
        gets(generoAux);
        break;
    case 3:
        printf("\nIngrese la duracion (en minutos):\n");
        scanf("%d", duracionAux);
        break;
    case 4:
        printf("\nIngrese la descripcion:\n");
        gets(descripcionAux);
        break;
    case 5:
        printf("\nIngrese el puntaje (1-5):\n");
        scanf("%d", puntajeAux);
        break;
    case 9:
        strcpy(movie[i].titulo, tituloAux);
        strcpy(movie[i].genero, generoAux);
        movie[i].duracion = duracionAux;
        strcpy(movie[i].descripcion, descripcionAux);
        movie[i].puntaje = puntajeAux;
        //movie[i].estado = i;
        printf("\n=========================CARGA EXITOSA=========================\n");
        salir = 9;
        break;

    }

    }while(salir!=9);











}


int borrarPelicula(EMovie movie)
{

}

void generarPagina(EMovie movie[], char nombre[])
{

}


void inicializar(EMovie movie[])
{
    int i=0;

    for(i=0; i<cantidad; i++)
    {
        printf("h");
        //movie[i].duracion = -1;
    }
}

int buscaDisponible(EMovie movie[])
{
    int index=-1;
    int i;

    for(i=0; i<cantidad; i++)
    {
        if(movie[i].duracion < 0);
        {
            return i;
            break;
        }
    }


    return index;
}

