#include "holberton.h"
/**
 * display_complex_number - displays complex numbers
 * @c: an struct which contains the complex field of a number
 * Return: void function
 */
void display_complex_number(complex c)
{
	int flag = 0;
	if (c.re != 0)
	{
		printf("%d ", c.re);
		if (c.im > 0)
			printf("+ ");
		flag = 1;
	}
	if (c.im < 0)
		printf("- ");
	if (c.im > 1 || c.im < -1)
	{
		printf("%di", c.im);
		flag = 1;
	}
	if (c.im == 1 || c.im == -1)
	{
		printf("i");
		flag = 1;
	}
	if (flag)
		printf("\n");
}
