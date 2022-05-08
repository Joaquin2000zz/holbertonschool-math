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
