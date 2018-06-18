#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {

    char nombre[20];
    int edad;
    int estado;
    int dni;

}persona;

/**
*Imprime el menu inicial de opciones
*/
void imprimirMenu();

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
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int obtenerEspacioLibre(persona listaPersonas[], int cantidad, int valor);

/**
 * Hardcodea la lista de personas con valores predeterminados
 * @param el array se pasa como parametro
 * @param cantidad indica la longitud del array.
 */
void hardcodePersonas(persona listaPersonas[], int cantidad);

/**
 * Imprime la lista de personas dadas de alta
 * @param el array se pasa como parametro
 * @param cantidad indica la longitud del array.
 */
void imprimirLista(persona listaPersonas[], int cantidad);

/**
 * Imprime la lista de personas dadas de alta ordenadas alfabéticamente
 * @param el array se pasa como parametro
 * @param cantidad indica la longitud del array.
 */
void imprimirListaAlfabetica(persona listaPersonas[], int cantidad);

/**
 * Cambia el flag de estado a -1 de la persona seleccionada.
 * @param el array se pasa como parametro
 * @param cantidad indica la longitud del array.
 */
void borraPersona (persona listaPersonas[], int cantidad);

/**
 * Muestra mediante un grafico la edad de los usuarios segun el rango
 * @param el array se pasa como parametro
 * @param cantidad indica la longitud del array.
 */
void graficar (persona listaPersonas[], int cantidad);

#endif // FUNCIONES_H_INCLUDED
