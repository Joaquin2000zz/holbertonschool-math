#include "holberton.h"

/**
 * complex_from_mod_arg - obtain a complex with modulus and arg
 * @m: the modulus og the complex number (hypotenuse)
 * @arg: the argument of the complex number (alpha)
 * @c3: the pointer to storage the complex
 * Return: void function
 */
void complex_from_mod_arg(double m, double arg, complex *c3)
{
	(*c3).re = cos(arg) * m, c3->im = sin(arg) * m;
}
