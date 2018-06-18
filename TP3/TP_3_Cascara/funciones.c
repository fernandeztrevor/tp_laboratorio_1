#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"

void inicializar(EMovie pelicula[], int cantidad, int valor)
{
    int i;

    for (i=0; i<cantidad; i++)
    {
        pelicula[i].estado = valor;
    }
}

int obtenerEspacioLibre(EMovie pelicula[], int cantidad, int valor)
{
    int i;
    for (i=0; i<cantidad; i++)
    {
     if (pelicula[i].estado == valor)
     {
         return i;
     }
    }
    return -1;
}

int altaPelicula(EMovie pelicula[], int i)
{
    int j;
    char titulo[20];
    char genero[20];
    int duracion[20];
    char descripcion[50];
    int puntaje[20];
    char linkImagen[50];
    int estado[20];


    printf("\nIngrese el titulo de la pelicula\n");
    fflush(stdin);
    gets(titulo[i]);
    printf("\nSeleccione el genero de la pelicula:\n1- Suspenso\n2- Terror\n3- Accion\n4- Comedia\n5- Romantica\n6- Infantil\n");
    scanf("%d", j);
    switch(j)
    {
        case 1:
        genero[i]='Suspenso';
        break;
        case 2:
        genero[i]='Terror';
        break;
        case 3:
        genero[i]='Accion';
        break;
        case 4:
        genero[i]='Comedia';
        break;
        case 5:
        genero[i]='Romantica';
        break;
        case 6:
        genero[i]='Infantil';
        break;
    }
    printf("\nIngrese la duracion de la pelicula en minutos\n");
    fflush(stdin);
    scanf("%d", duracion[i]);
    printf("\nIngrese la descripcion de la pelicula\n");
    fflush(stdin);
    gets(descripcion[i]);
    printf("\nIngrese el puntaje de la pelicula (1 al 5)\n");
    fflush(stdin);
    scanf("%d", puntaje[i]);





}
