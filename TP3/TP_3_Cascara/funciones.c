#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int agregarPelicula(EMovie movie[])
{
    int i;
    int j;

    i = buscaDisponible();
    printf("\nIngrese el titulo: \n");
    gets(movie[i].titulo);
    printf("\nSeleccione genero:\n- Accion\n- Aventura\n- Terror\n- Romantica\n- Comedia\n- Infantil\n- Otros");
    gets(movie[i].genero);


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
        movie[i].estado=-1;
    }
}

int buscaDisponible(EMovie movie[])
{
    int index=-1;
    int i;

    for(i=0; i<cantidad; i++)
    {
        if(movie[i].estado == -1);
        {
            return i;
            break;
        }
    }


    return index;
}

