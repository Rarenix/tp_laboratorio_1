#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
//incluyo la biblioteca adicional propia funciones.h
#include "funciones.h"
/** \brief suma : recibe 2 numeros y devuelve un  entero
 *
 * \param se carga el primer numero ingresado
 * \param se carga el segundo numero ingresado
 * \return devuelve un resultado al main
 *
 */

int sumar(int,int);
/** \brief resta : recibe 2 numeros y devuelve un  entero
 *
 * \param se carga un primer numero ingresado
 * \param se carga un primer numero ingresado
 * \return devuelve un resultado al main
 *
 */

int restar(int,int);
/** \brief multiplicacion : recibe 2 numero y devuelve un entero
 *
 * \param se carga el primer numero ingresado
 * \param se carga el segundo numero ingresado
 * \return devuelvo un resultado al main
 *
 */

int multiplicacion(int,int);
/** \brief division :recibe 2 numero y devuelvo un flotante(decimal)
 *
 * \param se carga el primer numero
 * \param se carga el segundo numero
 * \return devuelvo el resultado flotante al main
 *
 */

float division(int,int);
/** \brief factorial : recibo el primer numero o el segundo y devuelvo su factorial
 *
 * \param ingreso primer numero
 * \param ingreso segundo numero
 * \return devuelvo el factorial del primer numero y del segundo al main
 *
 */

int factor(int);

int operador(void);

int opci(void);

#endif // FUNCIONES_H_INCLUDED
