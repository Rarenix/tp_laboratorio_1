#include "funciones.h"
/*
int opC1;
int opC2;
int result;*/
//en esta funcion realizo la suma de los operarios;
int sumar(int opC1,int opC2)
{
    int result = opC1 + opC2;
    return result;
}//en esta funcion realizo la resta de los operarios
int restar (int opC1,int opC2)
{
    int result = opC1 - opC2;
    return result;
}
//en esta funcion realizo la multiplicacion de los operarios
int multiplicacion (int opC1,int opC2)
{
    int result = opC1 * opC2;
    return result;
}
//en esta funcion realizo la division de los operarios
float division (int opC1,int opC2)
{
    while (opC2==0){
        printf("Error(no se puede dividir por cero).\n Reingrese operando: ");
        scanf("%f",&opC2);
    }
    //uso float en este caso para poder obtener division con decimales
    float result = (float)opC1 / (float)opC2;
    return result;
}
//realizo el factorial para el primer y segundo operando designado por el usuario
int factor (int opC1)
{
    int resp;
    if (opC1==1)
        return 1;
    resp=opC1* factor(opC1-1);
    return (resp);
}
//selecciono el operador y verifico que este dentro del rango
int operador (void)
{
    int op=0;
    printf("Ingrese operando: ");
    scanf("%d",&op);
    while(op<0 && op>10 )
    {
        printf("Error: reingrese operando: ");
        scanf("%d",&op);
    }
    printf("Tu operador es: %d \n",op);
    system("pause");
    return op;
}
int opci(void){
    int opc=0;
    scanf("%d",&opc);
    while(opc<1 || opc>10 )
    {
       printf("Error: reingrese opción: ");
       scanf("%d",&opc);
    }
    return opc;
}
