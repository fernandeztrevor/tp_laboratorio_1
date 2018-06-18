#ifndef FUNCIONES_H_INCLUDED
#define FUNCION_H_INCLUDED


/** @brief Ingreso
 *
 * Funcion para ingresar un numero y devolverlo.
 * @return Devuelve un numero, del tipo float.
 *
 */
float ingreso(void);

/** @brief Validacion de Ingreso
 *
 * Funcion que valida si se ingresaron numeros en las variables necesarias.
 * @return Devuelve un numero, del tipo float.
 *
 */
int validarIngreso(int flag1, int flag2, int validacionIN);

/** @brief Sumar
 *
 * Funcion que realiza una suma entre 2 numeros ingresados.
 * @return Devuelve un numero, del tipo float.
 *
 */
float sumar (float op1, float op2);

/** @brief Restar
 *
 * Funcion que realiza una resta entre 2 numeros ingresados.
 * @return Devuelve un numero, del tipo float.
 *
 */
float restar(float op1, float op2);

/** @brief Dividir
 *
 * Función que realiza una división entre 2 numeros ingresados.
 * @return Devuelve un numero, del tipo float.
 *
 */
float dividir(float op1, float op2);

/** @brief Multiplicar
 *
 * Función que realiza una multiplicación entre 2 numeros ingresados.
 * @return Devuelve un numero, del tipo float.
 *
 */
float multiplicar(float op1, float op2);

/** @brief Factorial
 *
 * Funcion que realiza el factorial de un numero ingresado.
 * @return Devuelve un numero, del tipo int.
 *
 */
float factorial(float op1);

/** @brief Todas las operaciones
 *
 * Funcion que realiza la suma, resta, división y multiplicacion entre 2 numeros ingresados y muestra cada uno de los resultados.
 * @return Devuelve un numero, del tipo float.
 *
 */
float todos(float op1, float op2);


#endif
