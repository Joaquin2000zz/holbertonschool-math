#include "holberton.h"

/**
 * display_complex_number - displays complex numbers
 * @c: an struct which contains the complex field of a number
 * Return: the conjugate
 */
complex conjugate(complex c)
{
	c.im = -c.im;
	return (c);
}

/**
 * division - divides 2 complex numbers
 * @c1: the first complex number
 * @c2: the second complex number
 * @c3: the pointer to storage the division
 * Return: void function
 */
void division(complex c1, complex c2, complex *c3)
{
	complex cDen = conjugate(c2);
	double ac = c1.re * cDen.re, ad = c1.re * cDen.im;
	double bc = c1.im * cDen.re, bd = -(c1.im * cDen.im);
	double cc = c2.re * cDen.re, dd = c2.im * c2.im;
	double ccdd = cc + dd;
	(*c3).re = (ac + bd) / ccdd, c3->im = (ad + bc) / ccdd;
}
