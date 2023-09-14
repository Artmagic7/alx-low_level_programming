#include "lists.h"

/**
 * dlistint_len - Restore the nmbr of elemnts in a linked dlistint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: Nmbr of elemnts in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	count++;
	h = h->next;
	}

	return (count);
}
