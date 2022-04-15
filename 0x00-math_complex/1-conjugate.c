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
