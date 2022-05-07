#ifndef FIBO_H
#define FIBO_H

#include <stddef.h>
#include <stdlib.h>
/**
 * struct cell - struct which containts the values of the fibonnaci sequence
 * @elt: xn + xn-1 value
 * @next: pointer to the next node
 *
 * Description: Lorem ipsum dolor sit amet consectetur adipisicing elit.
 */
typedef struct cell
{
	int elt;
	struct cell *next;
} t_cell;

t_cell *Fibonnaci();
double gold_number(t_cell *head);

#endif
