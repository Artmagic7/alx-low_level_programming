#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - Join a new node at the end of a doubly linked list.
 * @head: A pointer to a pointer to the head of the list.
 * @n: The integr to be stored in the new node.
 *
 * Return: The locatn of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current;

	if (!head)
	return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL) /* If the list is empty, set the new node as the head.*/
	{
	new_node->prev = NULL;
	*head = new_node;
	return (new_node);
	}

	current = *head;
	while (current->next)
	{
	current = current->next;
	}

	current->next = new_node;
	new_node->prev = current;

	return (new_node);
}
