#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "funciones.h"
#define TAM 50
int main()
{
    int op;
    int cont=0;
    char seguir ='s';
    ePersona clientes[TAM];
    limpiar(clientes);

    while(seguir =='s')
    {
    system("cls");
    printf("\n\nTRABAJO PRACTICO 2 \n");
    printf("\n\n1-Ingrese datos \n");
    printf("2-Borrar datos \n");
    printf("3-Mostrar lista ordenada \n");
    printf("4-Mostrar grafico \n");
    printf("5-Salir\n\n");

    printf("ingrese opcion: ");
    fflush(stdin);
    scanf("%d",&op);

    switch(op){
    case 1:
        if(cont>=TAM) //si el contador es mayor al tamaño definido se mostrara por pantalla un mensaje.
        {
            printf("\n se alcanzo el limite de clientes");
            system ("pause");

        }
        else
        {
            idatos(clientes);
            cont=cont+1;
            break;
        }



        break;

    case 2:
        borrarDatos (clientes);
        cont=cont-1;//al borrar una persona debo descontarlo del contador.
        break;
    case 3:
         orden(clientes);
         mostra(clientes);cont=cont-1;
        break;
    case 4:
        mostrarGraf (clientes);
        break;
    case 5:
        seguir = 'n';
        break;
    default:
        break;
        }
    }
    return 0;
    }
