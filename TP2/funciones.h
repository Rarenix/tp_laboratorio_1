#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct
{
    char nombre[50];
    int edad;
    int dni;
    int estado;
} ePersona;
/**
 * Limpiar
 * \param Recorre el vector e inicializa todo en 0
 *
 *
 *
 */

void limpiar(ePersona[]);
/**
 *Idatos
 * \param Busco el primer espacio vacio
 * \param Cambio el valor de la bandera en 1
 *\param Cargo los datos
 *\param Vefifico el nombre,dni,edad
 */

void idatos (ePersona[]);
/**
 * Recorre y busca el dni ingresado
 * @param Si el dni es el mismo aviso por pantalla
 * @param Pido al usuario que reingrese el dni
 * @return Devuelvo en nuevo dni ingresado
 */
int dniRep (ePersona[] ,int dniaux);

//int obtenerEspacioLibre(EPersona lista[]);

/**
Muestro por pantalla los datos ingresado.
*/
void mostra(ePersona[]);
/**borrarDatos
*Pido el dni del usuario a ser eliminado
*Pregunto si desea eliminarlo
*Si la respuesta es si se procede a la eliminacion
*/
void borrarDatos (ePersona[]);//borro los datos anteriormente ingresado
/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
//void buscarPorDni(ePersona[], int dni);
/**
* Realizo un burbujeo para ordenar los numbres
*/
void orden (ePersona[]);
/**
*Muestra un grafico de edades
*/
void mostrarGraf (ePersona[]);
#endif // FUNCIONES_H_INCLUDED
