#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
/** \brief suma : recibe 2 numeros y devuelve un  entero
 *
 * \param se carga el primer numero ingresado
 * \param se carga el segundo numero ingresado
 * \return devuelve un resultado al main
 *
 */

float sumar(float,float);

/** \brief resta : recibe 2 numeros y devuelve un  entero
 *
 * \param se carga un primer numero ingresado
 * \param se carga un primer numero ingresado
 * \return devuelve un resultado al main
 *
 */

float restar(float,float);

/** \brief multiplicacion : recibe 2 numero y devuelve un entero
 *
 * \param se carga el primer numero ingresado
 * \param se carga el segundo numero ingresado
 * \return devuelvo un resultado al main
 *
 */

float multiplicacion(float,float);

/** \brief division :recibe 2 numero y devuelvo un flotante(decimal)
 *
 * \param se carga el primer numero
 * \param se carga el segundo numero
 * \return devuelvo el resultado flotante al main
 *
 */

float division(float,float);
/** \brief factorial : recibo el primer numero o el segundo y devuelvo su factorial
 *
 * \param ingreso primer numero
 * \param ingreso segundo numero
 * \return devuelvo el factorial del primer numero y del segundo al main
 */

int factor(float);
/** \brief operador : recibe los numero ingresados a ser operados y los muestra en pantalla
 *
 * \param
 * \param
 * \return
 *
 */

float operador(void);
/** \brief opci : recibe un numero del menu si no es una de las opcines vuelve a pedir una opcion
 * \param opc tiene el valor a ser comparado en el while
 * \return retorna un valor numerico
 */

int opci(void);

#endif // FUNCIONES_H_INCLUDED
