#include <stdio.h>
#include "fibonacci.h"
#include <math.h>

/**
 * Heron- method which calculeates the srqt of a number
 * @p: number to find their square root
 * Return: the square root of p
 */
double Heron(double p)
{
	double x = p, xn = 0.5 * p;
	int i = 0;

	while (1)
	{
		xn = 0.5 * (xn + (p / xn));
		if (x == xn)
			break;
		x = xn;
		i++;
	}
	return (xn);
}

/**
 * add_nodeint - adds a new node at the end of a listint_t list.
 * @head: the head of the list
 * @n: the node's content
 * Return: the new header's list
 */

t_cell *add_nodeint(t_cell **head, int n)
{
	t_cell *new_header;

	new_header = malloc(sizeof(t_cell));

	if (!new_header)
	{
		free(new_header);
		return (0);
	}

	new_header->elt = n;
	new_header->next = *head;

	*head = new_header;

	return (*head);
}

/**
 * fibonnaci - fibonnaci values until x20 to golden ratio approaching (x20/x19)
 * Return: the pointer to the head of a linked list
 */
t_cell *Fibonnaci()
{
	double x = 0, xn = 1, Naux;
	t_cell *head = NULL, *aux = NULL;


	add_nodeint(&head, (int)xn);
	while (1)
	{
		Naux = xn;
		xn = x + xn;
		x = Naux;
		printf("aproach = %.10f golden ratio = %.10f\n", xn / x, (Heron(5) + 1) / 2);
		/* (sqrt(5) + 1) / 2 = golden ratio */
		/**if (floor(100000000 * (xn / x)) / 100000000 ==
		    floor(100000000 * (Heron(5) + 1) / 2) / 100000000)
			break;*/
		add_nodeint(&head, (int)xn);
	}
	aux = head;
	head = head->next;
	free(aux);
	return (head);
}

/**
 * gold_number - obtain golden ratio of the x20/x19 approaching
 * @head: pointer to the fibonacci stack
 * Return: x20/x19 = (sqrt(5) + 1) / 2 with 10^-7 approaching (golden ratio)
 */
double gold_number(t_cell *head)
{
	if (!head)
		return (-1);
	return ((double)head->elt / (double)head->next->elt);
}
