#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <float.h>
#include "funcion.h"

int main()
{
    char seguir = 's';
    int opcion = 0;
    float op1;
    float op2;
    float resultado;
    float ingresado;
    float fact;
    int flag1 = 0;
    int flag2 = 0;
    int validacionIN = 0;

while(seguir=='s')
    {
        printf("\n1- Ingresar 1er operando (A=%.2f)\n", op1);
        printf("2- Ingresar 2do operando (B=%.2f)\n", op2);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);


        switch(opcion)
        {
            case 1:
                {
                    op1 = ingreso();
                    flag1 = 1;
                }
                break;
            case 2:
                {
                    op2 = ingreso();
                    flag2 = 1;
                }
                break;
            case 3:
                {
                if( validacionIN == 0)
                {
                  printf("No se puede realizar esta operacion porque le falta ingresar alguno de los operandos\n");
                }
                else
                {
                resultado = sumar(op1, op2);
                  printf("\nEl resultado de la suma es: %.2f\n", resultado);
                }

                }
                break;
            case 4:
                {
                     if( validacionIN == 0)
                {
                  printf("No se puede realizar esta operacion porque le falta ingresar alguno de los operandos\n");
                }
                else
                {
                    resultado = restar(op1, op2);
                    printf("\nEl resultado de la resta es: %.2f\n", resultado);
                }
                }
                break;
            case 5:
                {
                   if( validacionIN == 0)
                {
                  printf("No se puede realizar esta operacion porque le falta ingresar alguno de los operandos\n");
                }
                else
                {
                  resultado = dividir(op1, op2);
                  printf("\nEl resultado de la división es: %.2f\n", resultado);
                }
                }
                break;
            case 6:
                {
                     if( validacionIN == 0)
                {
                  printf("No se puede realizar esta operacion porque le falta ingresar alguno de los operandos\n");
                }
                else
                {
                    resultado = multiplicar(op1, op2);
                    printf("\nEl resultado de la multiplicación es: %.2f\n", resultado);
                }
                }
                break;
            case 7:
                {

                        if(flag1==1)
                        {
                        resultado = factorial(op1);
                        printf("El resultado corresponde al entero del primer número ingresado");
                        printf("\nEl factorial del numero es: %.0f\n", resultado);
                        }
                        else
                        {
                        printf("Debe ingresar el operador 1 para realizar esta operacion\n");
                        }

                }
                break;
            case 8:
                printf("\nEl resultado de la suma es: %.2f\n", resultado = sumar(op1, op2));
                printf("\nEl resultado de la resta es: %.2f\n", resultado = restar(op1, op2));
                printf("\nEl resultado de la división es: %.2f\n", resultado = dividir(op1, op2));
                printf("\nEl resultado de la multiplicación es: %.2f\n", resultado = multiplicar(op1, op2));
                printf("\nEl factorial del entero del primer operador ingresado es: %.0f\n", resultado = factorial(op1));
                break;
            case 9:
                seguir = 'n';
                break;
        }

    }
    return 0;
}
