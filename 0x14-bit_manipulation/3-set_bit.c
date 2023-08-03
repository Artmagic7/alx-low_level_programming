#include "main.h"

/**
 * set_bit - Setting a bit at a given index to 1
 * @n: A pointer to the num to be changed
 * @index: The bit that is set to 1 index
 *
 * Return: 1 to indicate success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
