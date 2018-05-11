#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "funciones.h"
#define TAM 50
void limpiar(ePersona clientes[])
 {for(int i=0; i<TAM; i ++)
    {
        clientes[i].estado = 0;
        clientes[i].dni=0;
        clientes[i].edad=0;
        strcpy(clientes[i].nombre," ");
    }
 }
void idatos (ePersona clientes[])
{
    int espacio,dniaux;
    for(int i=0;i<TAM;i++)
    {
        if(clientes[i].estado==0)
        {
            espacio=i;
            break;
        }
    }clientes[espacio].estado = 1;
    printf("Ingrese nombre: ");
    fflush(stdin);
    scanf("%[^\n]",clientes[espacio].nombre);
    if(strlen(clientes[espacio].nombre)>50)
    {
        printf("¡¡¡ E R R O R (Nombre muy largo)!!!\n\n  Reingrese nombre: ");
        fflush(stdin);
        scanf("%[^\n]",clientes[espacio].nombre);
    }

    printf("Ingrese Dni: ");
    fflush(stdin);
    scanf("%d",&dniaux);
    clientes[espacio].dni=dniRep(clientes,dniaux);

    if(clientes[espacio].dni>99999999)
    {
    printf("Reingrese dni");
    fflush(stdin);
    scanf("%d",&clientes[espacio].dni);
    }
    printf("Ingrese edad: ");
    fflush(stdin);
    scanf("%d",&clientes[espacio].edad);
    if(clientes[espacio].edad>100)
    {
      printf("Reingrese edad");
      fflush(stdin);
      scanf("%d",&clientes[espacio].edad);
    }
}
void borrarDatos (ePersona clientes[])
{
    int i, auxDni;
    int flag=0;
    char opcion;
    mostra(clientes);
    printf("\n\nIngrese el dni a eliminar: ");
    scanf("%d",&auxDni);

    for(i=0; i<TAM; i++)
    {
        if(auxDni==clientes[i].dni)
        {
            flag=1;
            printf("\nDesea borrar el cliente con DNI(%d)???: (S/N)", auxDni);
            fflush(stdin);
            scanf("%c",&opcion);
            if(opcion=='s')
            {
                clientes[i].estado=0;
                clientes[i].dni=0;
                strcpy(clientes[i].nombre," ");
                printf("\nPersona eliminada.\n");
                break;

            }
            else
            {
                if(opcion!='s')
                {
                    printf("\nBorrado cancelado!!!\n");
                    break;
                }

            }
        }
        else
        {
            flag=0;
        }
    }
    if(flag==0)
    {
        printf("\n No se ha registrado ninguna persona, intente nuvamente\n:");
    }
    system("pause");
}
void mostra (ePersona clientes[])
{
    printf("nombres \t dni \t edad \n");
    for(int i=0;i<TAM;i++)
        {
        if(clientes[i].estado == 1)
            {
            printf(" %s \t \t   %d \t %d \n ",clientes[i].nombre,clientes[i].dni,clientes[i].edad);
            }
        }
        system("pause");
}

void orden (ePersona clientes[])
{   int i,j;
ePersona aux;
    for(i=0; i<TAM-1;i++)
    {
        for(j=i+1;j<TAM;j++)
        {
        if(strcmp(clientes[i].nombre, clientes[j].nombre)>0)
            {
                aux= clientes[i];
                clientes[i]=clientes[j];
                clientes[j]=aux;
            }
        }
    }
}

void mostrarGraf (ePersona clientes[])
{

    int i, entre0y18=0, entre19y35=0, entre36y99=0, flag=0, mayor;

    for(i=0;i<TAM;i++)
        {
        if(clientes[i].estado==1)
            {

        if(clientes[i].edad<19)
            {
            entre0y18++;
            }
        else if (clientes[i].edad>18&&clientes[i].edad<35)
            {
            entre19y35++;
            }
        else
            {
            entre36y99++;
            }
        }
        }
    if(entre0y18 >= entre19y35 && entre0y18 >= entre36y99)
        {
        mayor = entre0y18;
        }
    else
        {
        if(entre19y35 >= entre0y18 && entre19y35 >= entre36y99)
        {
            mayor = entre19y35;
        }
        else{
        mayor = entre36y99;
        }
    }
    printf("GRAFICO DE EDADES \n\n");
    for(i=mayor; i>0; i--){
        if(i<= entre0y18){
            printf("*");
        }
        if(i<= entre19y35){
            flag=1;
            printf("\t*");
        }
        if(i<= entre36y99){
            if(flag==0)
                printf("\t\t*");
            if(flag==1)
                printf("\t*");

        }
        printf("\n");
     }

    printf("<18\t19-35\t>35 \n");
    system("pause");
}
int dniRep (ePersona clientes[] ,int dniaux)
{
        for(int i=0;i<TAM;i++)
        {
            while (dniaux==clientes[i].dni)
            {
                printf("el dni ya fue ingresado. \n\n Reingrese DNI: ");
                scanf("%d",&dniaux);
            }
        }
        return dniaux;
}




