/*****************************************************************************/
/*                                 Casa                                      */
/*****************************************************************************/
/*                                                                           */
/* Una Casa tiene varios elementos                                           */
/*****************************************************************************/

// Indica que este archivo solo se debe incluir una vez en la compilación
#pragma once

// Declaramos el struct para la casa
struct house;
// Definimos un alias para el struct casa.
// La sintaxis es "typedef tipo alias"
typedef struct house House;

// Definimos el struct casa y sus componentes
// en python esto lo conocemos atributos de un objeto
struct house
{
  /** El número de la clle */
  int streetNumber;
  /** cantidad de personas que viven */
  int people;
  /** El ancho de la casa */
  int width;
};

// Declaramos las funciones asociadas

/** Inicializa una casa con las indicaciones */
House* house_init(int streetNumber, int people, int width);

/** Imprime una cassa y su información*/
void print_house(House* house);


