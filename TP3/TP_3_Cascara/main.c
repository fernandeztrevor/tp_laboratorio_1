#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#define cantidad 20
#define valor 20



int main()
{
    char seguir = 's';
    int opcion = 0;
    EMovie movie[cantidad];
    int index;

    inicializar(movie);
    hardcode(movie);
    listar(movie);

    while(seguir=='s')
    {
        printf("1- Agregar pelicula\n");
        printf("2- Borrar pelicula\n");
        printf("3- Generar pagina web\n");
        printf("4- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                agregarPelicula(movie);
                break;
            case 2:
                break;
            case 3:
               break;
            case 4:
                seguir = 'n';
                break;
            case 8:
                listar(movie);
                break;
        }
    }

    return 0;
}
