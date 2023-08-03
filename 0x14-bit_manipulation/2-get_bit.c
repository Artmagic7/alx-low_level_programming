#include "main.h"

/**
 * get_bit - Returns a Bit's value at an index in a decimal number
 * @n: number to be searched
 * @index: The Bit's index
 *
 * Return: The Bit's value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
