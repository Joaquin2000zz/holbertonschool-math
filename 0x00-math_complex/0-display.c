#include "holberton.h"
/**
 * display_complex_number - displays complex numbers
 * @c: an struct which contains the complex field of a number
 * Return: void function
 */
void display_complex_number(complex c)
{
	printf("%g", c.re);
	if (c.im > 0)
		printf(" + ");
	if (c.im < 0)
		printf(" - ");
	if (c.im > 0.0 && c.im != 1)
		printf("%gi", c.im);
	if (c.im < -1)
		printf("%gi", c.im * -1);
	if (c.im == 1 || c.im == -1)
		printf("i");
	printf("\n");
}
