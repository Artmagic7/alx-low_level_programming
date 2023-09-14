#include "lists.h"

/**
 * sum_dlistint - Calc addtn of all the data in doubly linked list.
 * @head: Pointer to head of linked list.
 *
 * Return: Sum of all data, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	return (0);

	while (head != NULL)
	{
	sum += head->n;
	head = head->next;
	}

	return (sum);
}
