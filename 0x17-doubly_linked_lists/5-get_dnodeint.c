#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Gain node at specific sign in doubly linked list
 * @head: Pointer to the head of the list
 * @index: Sign of the node to retrieve (starting from 0)
 *
 * Return: Pointer to the nth node, or NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int j = 0;

	while (head != NULL)
	{
	if (j == index)
		return (head);
	head = head->next;
	j++;
	}

	return (NULL);
}
