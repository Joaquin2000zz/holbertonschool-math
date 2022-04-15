#include "holberton.h"

/**
 * multiplication - multiply 2 complex numbers
 * @c1: the first complex number
 * @c2: the second complex number
 * @c3: the pointer to storage the multiplication
 * Return: void function
 */
void multiplication(complex c1, complex c2, complex *c3)
{
	int ac = c1.re * c2.re;
	int ad = c1.re * c2.im;
	int bc = c1.im * c2.re;
	int bd = - (c1.im * c2.im);
	(*c3).re = ac + bd, c3->im = ad + bc;
}
