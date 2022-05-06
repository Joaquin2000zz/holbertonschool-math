#include "heron.h"
#include <stdio.h>

/**
 * add_nodeint - adds a new node at the end of a listint_t list.
 * @head: the head of the list
 * @n: the node's content
 * Return: the new header's list
 */

t_cell *add_nodeint(t_cell **head, float n)
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
 * heron - method which calculates the srqt of a number
 * @p: number to find their square root
 * @u0: the first value which xn-1 has
 * Return: the pointer to the head of a linked list
 */
t_cell *heron(double p, double u0)
{
	double x = p, xn = u0;
	int i = 0;
	t_cell *head = NULL;

	add_nodeint(&head, u0);

	while (1)
	{
		xn = 0.5 * (xn + (p / xn));
		if (floor(10000000 * xn) / 10000000 ==
		    floor(10000000 * x) / 10000000)
			break;
		add_nodeint(&head, xn);
		x = xn;
		i++;
	}
	return (head);
}
