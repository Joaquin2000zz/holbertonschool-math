#include "holberton.h"

/**
 * argument - calculates the argument of a given complex number
 * @c: the complex number
 * Return: the argument
 */
double argument(complex c)
{
	return (atan(c.im / c.re));
}
