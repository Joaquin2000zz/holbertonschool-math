#include "rectangle.h"
#include <stdio.h>

/**
 * rectangle_method - area under 1 + x^2 in between the [0, 1] interval
 * @a: interval begin
 * @b: interval end
 * Return: The Rectangle approximation of the Integral
 */
double rectangle_method(double a, double b, int steps)
{
	double ith_rectangle, width, height, rectangleApproaching = 0;

	for (ith_rectangle = a; ith_rectangle < steps; ith_rectangle++)
	{
		/* The width of rectangle i is equal to: */
		width = (b - a) / steps;
		/* The height of rectangle i is equal to: */
		height = 1 + ((a + ((ith_rectangle) * width)) * (a + ((ith_rectangle) * width)));
		rectangleApproaching += width / height;
	}
	return (rectangleApproaching);
}
