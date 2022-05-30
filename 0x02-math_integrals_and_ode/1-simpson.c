#include "simpson.h"
#include <stdio.h>

/**
 * f - function 1 + x^2
 * @x: input
 * Return: abscissa value corresponding to the input
 */
double f(double x)
{
	return (1 + (x * x));
}


/**
 * simpson - area of integral (1 + x^2)*dx in between the [0, 1] interval
 * @a: interval begin
 * @b: interval end
 * Return: The Rectangle area of using the simpson method
 */
double simpson(double a, double b, int steps)
{
	int i;
	double ith_rectangle = 0, deltax, y, rectangleApproaching = 0;

	deltax = (b - a) / steps;
	for (i = 1; i < steps; i++)
	{
		/* The simpson method adds sub slices of the function
		 * deltax*(f(xn-2) + 4*f(xn-1) + f(xn))
		 * deltax = (b-a)/n and n = the subinterbals */
		if (i % 2 == 0)
		{
			y = 2 * f(a + deltax);
			printf("internal border value 2f(x) = %f\n", y);
		}
		else
		{
			y = 4 * f(a + deltax);
			printf("middle value 4f(x) = %f\n", y);
		}
		rectangleApproaching += y;
		printf("\n\nrectangle approaching = %f\n", rectangleApproaching);
		printf("ith rectalgle before iteration = %f\n", ith_rectangle);
		ith_rectangle += deltax;
		printf("ith rectangle after iteration = %f\n\n", ith_rectangle);
	}
	return ((deltax / 3) * ((f(a)) + rectangleApproaching + (f(b))));
}
