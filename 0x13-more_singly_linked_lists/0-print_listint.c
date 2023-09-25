#include <stdio.h>
#include "lists.h"

/**
 * print_listint - A function that prints all the elements of a listint_t list.
 * @h: A pointer to the heaad of the list.
 *
 * Return: the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t count_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count_nodes++;
	}

	return (count_nodes);
}
