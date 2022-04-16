#include "holberton.h"

/**
 * conjugate - makes the conjugate of a complex number
 * @c: an struct which contains the complex field of a number
 * Return: the conjugate
 */
complex conjugate(complex c)
{
	c.im = -c.im;
	return (c);
}
