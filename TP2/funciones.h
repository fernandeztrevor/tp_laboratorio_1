#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {

    char nombre[20];
    int edad;
    int estado;
    int dni;

}persona;


/**
*\brief Verifica si el ingreso es numero
*\param str Array con la cadena que se analiza
*\return 1 si es numerico y 0 si no lo es
*/
int numerico(char str[]);

/**
*\brief Verifica si el ingreso es solo letras
*\param str Array con la cadena que se analiza
*\return 1 si es numerico y 0 si no lo es
*/
int letras(char str[]);

/**
*\brief Verifica si el ingreso es alfanumérico
*\param str Array con la cadena que se analiza
*\return 1 si es numerico y 0 si no lo es
*/
int alfanumerico(char str[]);

/**
 * Inicializa el array de estado en un determinado valor.
 * @param estado es el array a ser inicializado.
 * @param cantidad indica la longitud del array.
 * @param valor es el valor que será cargado en cada posición.
 * @return el primer indice disponible
 */
void inicializar(persona listaPersonas[], int cantidad, int valor);

/**
 * Obtiene el primer indice libre del array.
 * @param listaPersonas el array se pasa como parametro.
 * @return el primer indice disponible o -1 si no hay espacio.
 */
int obtenerEspacioLibre(persona listaPersonas[], int cantidad, int valor);

/**
 * Imprime una lista de los datos cargados.
 * @param listaPersonas el array se pasa como parametro.
 * @param cantidad se pasa como parametro.
 * @param j se pasa como para ser utilizado como contador.
  * @return devuelve la cantidad de items mostrados.
 */
int imprimirLista(persona listaPersonas[], int cantidad, int j);

/**
 * Imprime una lista de los datos cargados.
 * @param listaPersonas el array se pasa como parametro.
 * @param cantidad se pasa como parametro.
 */
void imprimirListaVoid(persona listaPersonas[], int cantidad);

/**
 * Ordena alfabéticamente los datos cargados.
 * @param listaPersonas el array se pasa como parametro.
 * @param cantidad se pasa como parametro.
 */
void ordenAlfabetico(listapersonas, cantidad);



#endif // FUNCIONES_H_INCLUDED
