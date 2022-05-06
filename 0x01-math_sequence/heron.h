#ifndef HERON_H
#define HERON_H

#include <stddef.h>
#include <stdlib.h>
/**
 * struct cell - struct which containts the values of the heron sequence
 * @elt: xn value
 * @next: pointer to the next node
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
