#include "funciones.h"
float sumar(float opC1,float opC2)
{
    float result = opC1 + opC2;
    return result;
}
float restar (float opC1,float opC2)
{
    float result = opC1 - opC2;
    return result;
}
float multiplicacion (float opC1,float opC2)
{
    float result = opC1 * opC2;
    return result;
}
float division (float opC1,float opC2)
{
    while (opC2==0){
        printf("Error(no se puede dividir por cero).\n Reingrese operando: ");
        scanf("%f",&opC2);
    }
    float result = opC1 / opC2;
    return result;
}
int factor (float opC2)
{
    int resp;
    if ((int)opC2<=1)//segun distintas paginas web factorial de cero es uno y factorial de uno es uno
        return 1;
    resp=opC2* factor(opC2-1);
    return (resp);
}

float operador (void)
{
    float op=0;
    printf("Ingrese operando: ");
    scanf("%f",&op);
    printf("Tu operador es: %.2f \n",op);
    system("pause");
    return op;
}

int opci(void){
    int opc=0;
    scanf("%d",&opc);
    while(opc<1 || opc>10 )
    {
       printf("Error: reingrese opcion: ");
       scanf("%d",&opc);
    }
    return opc;
}

