#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Excise a node at givn sign.
 * @head: Pointer to a pointer to head of list.
 * @index: Sign of the node to delete.
 * Return: 1 if succeeded, -1 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *prev_node;
	unsigned int j;

	if (*head == NULL)
	return (-1);

	current = *head;
	prev_node = NULL;

	/* Traverse to find the node at the specified sign */
	for (j = 0; current != NULL && j < index; j++)
	{
	prev_node = current;
	current = current->next;
	}

	/* If the index is out of bounds */
	if (j != index)
	return (-1);

	/* Update the next pointer of the previous node */
	if (prev_node != NULL)
	prev_node->next = current->next;
	else
	*head = current->next;  /* Update the head if deleting the first node */

	/* Update the prev pointer of the next node */
	if (current->next != NULL)
	current->next->prev = prev_node;

	/* Free the memory of the node to be excised */
	free(current);

	return (1);
}

