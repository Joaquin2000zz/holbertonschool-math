#include "holberton.h"

/**
 * substraction - subtracts 2 complex numbers
 * @c1: the first complex number
 * @c2: the second complex number
 * @c3: the pointer to storage the substraccion
 * Return: void function
 */
void substraction(complex c1, complex c2, complex *c3)
{
	(*c3).re = c1.re - c2.re, c3->im = c1.im - c2.im;
}
