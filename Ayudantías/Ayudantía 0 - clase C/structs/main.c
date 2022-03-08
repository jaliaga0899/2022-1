/*****************************************************************************/
/*                                 Structs                                   */
/*****************************************************************************/
/*                                                                           */
/* En C podemos definir nuestros propios tipos de datos, parecidos a las     */
/* clases, llamados Struct. La unica diferencia que tienen con las clases    */
/* es el hecho de que no tienen funciones, por lo que cualquier operación    */
/* que queramos hacer con ellos requerirá que los pasemos como parámetro.    */
/* Esto último es similar al self de python (porque de aquí viene)           */
/*                                                                           */
/* Para organizarnos, definimos los structs y declaramos las funciones       */
/* externas en un archivo llamado header .h, mientras que en un archivo .c   */
/* aparte escribimos el codigo de esas funciones y funciones internas.       */
/* El .h es la cara visible de tu struct, como si fuera una librería.        */
/* Es lo primero que la gente va a leer si quiere utilizar la estructura     */
/* que definiste, sin tener que ponerse a leer el código de las funciones    */
/* Revisa los archivos .h y .c que están junto a este para tener un ejemplo. */
/*                                                                           */
/* Como aclaración:                                                          */
/* Si S es un struct en STACK que tiene los elementos a y b, podemos acceder */
/* a ellos usando S.a y S.b. En cambio si P es un puntero a un struct de ese */
/* mismo tipo, se accede a los elementos con P -> a y P -> b                 */
/*****************************************************************************/

#include <stdio.h>
#include <stdbool.h>
// Importamos la casa
#include "house.h"

int main(int argc, char** argv)
{
  // podemos definir directamente el struct en el stack.
  // declarar la casa en el stack automaticamente le otorga memoria
  // a la casa
  House stackHouse;

  stackHouse.people = 5;
  stackHouse.streetNumber = 10;
  stackHouse.width = 15;


  // prints de la casa
  printf("### Esta es la casa en el stack ###")
  prinf("numero de personas: %i", stackHouse.people);
  prinf("numero de calle: %i", stackHouse.streetNumber);
  prinf("ancho: %i", stackHouse.width);


  // definimos la casa en el heap
  House* heapHouse = malloc(sizeof(House));
  heapHouse -> people = 6;
  stackHouse -> streetNumber = 12;
  stackHouse -> width = 15;

  // este segundo método se puede almacenar en una función


  matrix_test(4, 3);

  list_test(10);

  return 0;
}