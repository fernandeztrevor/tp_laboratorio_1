#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#define cantidad 20
#define init -1

int agregarPelicula(EMovie movie[], int i)
{
    //int i;
    int j = 0;
    int eleccion;
    char tituloAux[20];
    char generoAux[20];
    int duracionAux;
    char descripcionAux[50];
    int puntajeAux;
    char linkImagenAux[50];
    int salir = 0;
    int ok = 0;

    //i = buscaDisponible(movie);

    do
    {
        if(i == -1)
        {
           printf("\nNo hay mas espacio disponible\n");
        }
        else
        {
            printf("\nIngrese el titulo: \n");
            fflush(stdin);
            gets(tituloAux);
            while (alfanumerico(tituloAux)!=1)
                {
                    printf("El titulo solo puede estar compuesto por letras o numeros, reingrese:\n");
                    fflush(stdin);
                    gets(tituloAux);
                }
            printf("\nSeleccione genero:\n- ACCION\n- AVENTURA\n- TERROR\n- ROMANTICA\n- COMEDIA\n- INFANTIL\n- OTROS\n");
            fflush(stdin);
            gets(generoAux);
            toupper(generoAux);
            while (letras(generoAux)!=1)
                {
                    printf("El genero solo puede estar compuesto por letras, reingrese:\n");
                    fflush(stdin);
                    gets(generoAux);
                    toupper(generoAux);
                }
            printf("\nIngrese la duracion (en minutos):\n");
            fflush(stdin);
            scanf("%d", &duracionAux);
            while (numerico(duracionAux)==1)
                {
                    printf("La duracion solo puede estar compuesta por numeros, reingrese:\n");
                    fflush(stdin);
                    scanf("%d", &duracionAux);
                }
            printf("\nIngrese la descripcion:\n");
            fflush(stdin);
            gets(descripcionAux);
            printf("\nIngrese el puntaje (1-5):\n");
            fflush(stdin);
            scanf("%d", &puntajeAux);
            while (numerico(puntajeAux)==1)
                {
                    printf("el puntaje solo puede estar compuesto por numeros, reingrese:\n");
                    fflush(stdin);
                    scanf("%d", &puntajeAux);
                }
            printf("\nIngrese la ubicacion de la imagen:\n");
            fflush(stdin);
            gets(linkImagenAux);
        }

    system("cls");
    printf("\n=========================PREVISUALIZACION=========================");
    printf("\n1- Titulo: %s\n", tituloAux);
    printf("2- Genero: %s\n", generoAux);
    printf("3- Duracion: %d min.\n", duracionAux);
    printf("4- Descripcion: %s\n", descripcionAux);
    printf("5- Puntaje: %d\n", puntajeAux);
    printf("\n\nSi desea modificar alguna instancia presione el numero indicador, si quiere confirmar y guardar presione 9\n");
    scanf("%d", &eleccion);

    switch(eleccion)
    {
    case 1:
        printf("\nIngrese el titulo: \n");
        fflush(stdin);
        gets(tituloAux);
        while (alfanumerico(tituloAux)!=1)
            {
                printf("El titulo solo puede estar compuesto por letras o numeros, reingrese:\n");
                fflush(stdin);
                gets(tituloAux);
            }
        break;
    case 2:
        printf("\nSeleccione genero:\n- Accion\n- Aventura\n- Terror\n- Romantica\n- Comedia\n- Infantil\n- Otros");
        fflush(stdin);
        gets(generoAux);
        toupper(generoAux);
        while (letras(generoAux)!=1)
            {
                printf("El genero solo puede estar compuesto por letras, reingrese:\n");
                fflush(stdin);
                gets(generoAux);
                toupper(generoAux);
            }
        break;
    case 3:
        printf("\nIngrese la duracion (en minutos):\n");
        fflush(stdin);
        scanf("%d", &duracionAux);
        while (numerico(duracionAux)==1)
            {
                printf("La duracion solo puede estar compuesta por numeros, reingrese:\n");
                fflush(stdin);
                scanf("%d", &duracionAux);
            }
        break;
    case 4:
        printf("\nIngrese la descripcion:\n");
        fflush(stdin);
        gets(descripcionAux);
        break;
    case 5:
        printf("\nIngrese el puntaje (1-5):\n");
        fflush(stdin);
        scanf("%d", &puntajeAux);
        while (numerico(puntajeAux)==1)
            {
                printf("el puntaje solo puede estar compuesto por numeros, reingrese:\n");
                fflush(stdin);
                scanf("%d", &puntajeAux);
            }
        break;
    case 9:
        strcpy(movie[i].titulo, tituloAux);
        strcpy(movie[i].genero, generoAux);
        movie[i].duracion = duracionAux;
        strcpy(movie[i].descripcion, descripcionAux);
        movie[i].puntaje = puntajeAux;
        ok = guardar(movie, cantidad);
        if(ok == 0)
        {
            printf("\nERROR EN EL GUARDADO DEL ARCHIVO\n");
        }
        else
            {
            system("cls");
            printf("\n=========================CARGA EXITOSA=========================\n");
            }
        //printf("\n=========================CARGA EXITOSA=========================\n");
        salir = 9;
        break;
    }
    }while(salir!=9);
}

int guardar(EMovie movie[], int valor)
{
    FILE *pArch;
    int i = 0;

        if((pArch=fopen("pelis.dat","wb"))==NULL)
        {
            printf("\nEl archivo no pudo ser abierto");
        }
        else{
            fwrite(movie,sizeof(EMovie), valor, pArch);
            i = 1;
            fclose(pArch);
            }

    return i;
}

int borrarPelicula(EMovie movie[])
{
int i;
int index;
char confirm[1];
int ok;
i = listar(movie);

if(i == 0)
{
    system("cls");
    printf("\nNO EXISTEN DATOS CARGADOS\n");
}
else
{
    printf("\nSeleccione la pelicula que desea borrar\n");
    scanf("%d", &index);
    while(index < 0 && index > i)
    {
    printf("\nError, reingrese la pelicula que desea borrar\n");
    scanf("%d", &index);
    }

    printf("\nEsta seguro que desea borrar %s?\nPresione S para confirmar, N para cancelar\n", movie[index].titulo);
    fflush(stdin);
    gets(confirm);
    strupr(confirm);
    printf("%s", confirm);

    if( strcmp(confirm, "S")==0)
    {
        movie[index].duracion = -1;
        ok = guardar(movie, cantidad);
        if(ok == 0)
        {
            printf("\nERROR EN EL GUARDADO DEL ARCHIVO\n");
        }
        else
            {
            system("cls");
            printf("\n=========================BORRADO EXITOSO=========================\n\n");
            }
    }
    else
    {
        printf("No borraste nada");
    }
}
}

void generarPagina(EMovie movie[], char nombre[])
{

}


void inicializar(EMovie movie[])
{
    int i=0;

    for(i=0; i<cantidad; i++)
    {
        movie[i].duracion = init;
    }
}



int buscaDisponible(EMovie movie[])
{
    int index=-1;
    int i;

    for(i=0; i<cantidad; i++)
    {
        if( movie[i].duracion == init )
        {
            return i;
        }
    }
    return index;
}

int listar(EMovie movie[])
{
    int i;
    int j = 0;
    printf("\nIndice      Titulo\n");
    for(i = 0; i<cantidad; i++)
    {
        if(movie[i].duracion > 0)
        {
            printf("%d.          %s         %d min\n", i, movie[i].titulo, movie[i].duracion);
            j++;
        }
    }

    return j;
}

void hardcode(EMovie movie[])
{
    char tituloAux[3][20]={"Rambo", "Rocky", "Tarzan"};
    char generoAux[3][20]={"Accion", "Accion", "Aventura"};
    int duracionAux[3]={120, 100, 40};
    char descripcionAux[3][50]={"Rambo", "Rocky", "Tarzan"};
    int puntajeAux[3]={2, 5, 4};
    char linkImagenAux[3][50]={"Rambo", "Rocky", "Tarzan"};

    for(int i=0; i<3; i++)
    {
        strcpy(movie[i].titulo, tituloAux[i]);
        strcpy(movie[i].genero, generoAux[i]);
        movie[i].duracion = duracionAux[i];
        strcpy(movie[i].descripcion, descripcionAux[i]);
        movie[i].puntaje = puntajeAux[i];
    }
}

int numerico(int str)
{

    if(isdigit(str))
    {
        return 1;
    }
    return 0;
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
