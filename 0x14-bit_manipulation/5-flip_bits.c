#include "main.h"

/**
 * flip_bits - The num of bits to change is counted
 * to move from a num to another
 * @n: 1st num
 * @m: 2nd num
 *
 * Return: Num of bits that will be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int v, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (v = 63; v >= 0; v--)
	{
		current = exclusive >> v;
		if (current & 1)
			count++;
	}

	return (count);
}

