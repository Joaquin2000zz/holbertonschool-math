#include "holberton.h"

/**
 * complex_from_mod_arg - obtain a complex with modulus and arg
 * @c1: the first complex number
 * @c2: the second complex number
 * @c3: the pointer to storage the division
 * Return: void function
 */
void complex_from_mod_arg (double m, double arg, complex *c3)
{
	(*c3).re = cos(arg) * m, c3->im = sin(arg) * m;
}
