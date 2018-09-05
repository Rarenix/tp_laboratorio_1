#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float op1= 0;
    float op2= 0;
    float resultado = 0;
    float resultado2 = 0;

    do{


        system("cls");

        printf("\n   CALCULADORA by Silvio\n   *********************\n\n");

        if (op1!=0 || op2!=0)
        printf("Sus operadores actuales son: A= %.2f y B= %.2f\n\n",op1,op2);
        printf("\n1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n\n");
        printf("Ingrese opcion: ");

        opcion=opci();
        switch(opcion)
        {
            case 1:
                op1= operador();
                break;
            case 2:
                op2= operador();
                break;
            case 3:
                resultado = sumar(op1,op2);
                printf("El resultado es: %.2f \n",resultado);
                system("pause");
                break;
            case 4:
                resultado = restar (op1,op2);
                printf("El resultado es: %.2f \n",resultado);
                system("pause");
                break;
            case 5:
                resultado2 = division(op1,op2);
                printf("El resultado es: %.2f \n",resultado2);
                system("pause");

                break;
            case 6:
                resultado = multiplicacion(op1,op2);
                printf("El resultado es: %.2f \n",resultado);

                system("pause");
                break;
            case 7:
                resultado = factor(op1);
                printf("El resultado del primer factorial es: %.2f \n",resultado);

                resultado = factor(op2);
                printf("El resultado del segundo factorial es: %.2f \n",resultado);
                system("pause");
                break;
            case 8:
                resultado = sumar(op1,op2);
                printf("El resultado de la suma es: %.2f \n",resultado);

                resultado = restar(op1,op2);
                printf("El resultado de la resta es: %.2f \n",resultado);

                resultado = multiplicacion(op1,op2);
                printf("El resultado de la multiplicacion es : %.2f \n",resultado);

                resultado2 = division(op1,op2);
                printf("El resultado de la division es: %.2f \n",resultado2);

                resultado = factor(op1);
                printf("El resultado del factorial del primer operador es: %.2f \n",resultado);

                resultado = factor(op2);
                printf("El resultado del factorial del segundo operador es: %.2f \n",resultado);
                system("pause");
                break;
            case 9:
                seguir = 'n';
                break;
            default:
                break;
        }
    }while(seguir=='s');
    return 0;
}
