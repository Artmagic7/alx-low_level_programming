#include "main.h"

/**
 * clear_bit - A given bits value is set  to 0
 * @n: Indicator to the number to be changed
 * @index: The bits index to clear
 *
 * Return: 1 to mean Success, -1 for Failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
