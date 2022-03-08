#include "house.h"


/*
En python, tu asignabas un valor a una vairable (un int, bool, etc) y se guardaba.
En C, debes indicar cómo guardar la información usando funciones de stdlib.h
Esas funciones son malloc, calloc y free. Estas funciones interactúan con el HEAP.
Más abajo te enseñamos a utilizar estos bloques de memoria y a liberarlos cuando ya
no los necesites.
*/

/*
########## Almacenar utilizando malloc ##########
*/

House* init_house() {
  // House house;
  House house = malloc(sizeof(house));

  int a;
  // return house;
  return a;
}

/*
########## Almacenar utiliznado calloc ##########
*/

/*
########## Imprimir la casa ##########
*/

void print_house(House* house)
{

}

/*
########## Liberar memoria con free ##########
*/