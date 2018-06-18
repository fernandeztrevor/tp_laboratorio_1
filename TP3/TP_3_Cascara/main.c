#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define cantidad 20
#define valor -1

inicializar(EMovie[]);
obtenerEspacioLibre(EMovie[]);
altaPelicula(EMovie[], int);

int main()
{
    char seguir='s';
    int opcion=0;
    int i;
    EMovie  pelicula[20];

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
                i = obtenerEspacioLibre(pelicula);
                if (i==-1)
                {
                    printf("\nNo hay mas lugar disponible\n");
                }
                else
                {
                    altaPelicula(pelicula, i);
                }

                break;
            case 2:
                break;
            case 3:
               break;
            case 4:
                seguir = 'n';
                break;
        }
    }

    return 0;
}
