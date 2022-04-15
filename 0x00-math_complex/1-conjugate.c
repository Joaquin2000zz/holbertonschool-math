#include "holberton.h"
/**
 * display_complex_number - displays complex numbers
 * @c: an struct which contains the complex field of a number
 * Return: the conjugate
 */
complex conjugate(complex c)
{
	c.re *= c.re, c.re /= c.re;
	c.im *= -1;
	return (c);
}
