#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - A function that deletes the head node of a listint_t
 *               linked list, and returns the head node’s data (n).
 * @head: A Pointer to the pointer of the list.
 *
 * Return: return 0 if the head of the list is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	*head = temp->next;
	free(temp);

	return (data);
}
