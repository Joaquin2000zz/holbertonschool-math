#ifndef HERON_H
#define HERON_H

#include <stddef.h>
#include <stdlib.h>
/**
 * struct complex - struct which is the complex field of numbers
 * @re: the real part
 * @im: the imaginary part
 *
 * Description: Lorem ipsum dolor sit amet consectetur adipisicing elit.
 */
typedef struct cell
{
	double elt;
	struct cell *next;
} t_cell;

t_cell *heron(double p, double u0);
	
#endif
