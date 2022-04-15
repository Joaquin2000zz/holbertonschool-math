#include "holberton.h"
/**
 * display_complex_number - displays complex numbers
 * @c: an struct which contains the complex field of a number
 * Return: void function
 */
void display_complex_number(complex c)
{

	if (c.re > 0)
	{
		printf("%d", c.re);
		if (c.im > 0)
			printf(" + ");
		if (c.im < 0)
			printf("-");
	}
	if (c.im > 1 || c.im < -1)
		printf("%di", c.im);
	if (c.im == 1 || c.im == -1)
		printf("i");
	printf("\n");
}
