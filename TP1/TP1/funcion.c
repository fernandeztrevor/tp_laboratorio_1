#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <float.h>
#include "funcion.h"

float ingreso(void)
{
    float numero;
    int letra;

    fflush(stdin);
    printf("\nIngrese un valor numerico: \n");
    scanf("%f", &numero);


    return numero;
}

int validarIngreso(int flag1, int flag2, int validacionIN)
{


    if (flag1==0 || flag2==0)
    {
        validacionIN = 0;
    }
    else
    {
        validacionIN = 1;
    }

    return validacionIN;
}

float sumar (float op1, float op2)
{

    float resultado;

    resultado = op1 + op2;

    return resultado;
}
float restar(float op1, float op2)
{

    float resultado;

    resultado= op1 - op2;

    return resultado;
}
float dividir(float op1, float op2)
{

    float resultado;

    while(op2==0)
    {
        printf("Error, el operador 2 no puede ser 0, reingrese: \n");
        scanf("%f", &op2);
    }
    resultado=op1/op2;

    return resultado;
}
float multiplicar(float op1, float op2)
{

    float resultado;

    resultado=op1*op2;

    return resultado;
}

float factorial(float op1)
{
    int fact=1;
    int i;
    float resultado;

for (i=1;i<=op1;i++)
{
    fact=fact*i;
}

return fact;
}

float todos(float op1, float op2)
{

    float resultado;

   resultado=op1+op2;
    printf("\nEl resultado de la suma es: %.2f\n", resultado);

   resultado=op1-op2;
    printf("\nEl resultado de la resta es: %.2f\n", resultado);

    while(op2==0)
    {
        printf("Error, el operador 2 no puede ser 0, reingrese: \n");
        scanf("%d", &op2);
    }
    resultado=(float)op1/op2;

    printf("\nEl resultado de la división es: %.2f\n", resultado);

    resultado=op1*op2;
    printf("\nEl resultado de la multiplicación es: %.2f\n", resultado);


    int fact=1;
    int i;

    for (i=1;i<=op1;i++)
{
    fact=fact*i;
}
printf("El resultado corresponde al primer número ingresado");
printf("\nEl factorial del numero es: %d\n", fact);

return ;

}

