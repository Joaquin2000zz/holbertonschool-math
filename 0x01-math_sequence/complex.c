#include "holberton.h"

/**
 * modulus - return the modulus of a given complex number
 * @c: the complex number
 * Return: the modulus
 */
double modulus(complex c)
{
	return (sqrt(pow(c.re, 2) + pow(c.im, 2)));
}

/**
 * addition - performs the addition operation to complex numbers
 * @c1: the first complex number
 * @c2: the second complex number
 * @c3: pointer to the struct to storage the result of two complex numbers
 * Return: void function
 */
void addition(complex c1, complex c2, complex *c3)
{
	(*c3).re = c1.re + c2.re, c3->im = c1.im + c2.im;
}

/**
 * multiplication - multiply 2 complex numbers
 * @c1: the first complex number
 * @c2: the second complex number
 * @c3: the pointer to storage the multiplication
 * Return: void function
 */
void multiplication(complex c1, complex c2, complex *c3)
{
	double ac = c1.re * c2.re;
	double ad = c1.re * c2.im;
	double bc = c1.im * c2.re;
	double bd = - (c1.im * c2.im);
	(*c3).re = ac + bd, c3->im = ad + bc;
}
