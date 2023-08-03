#include "main.h"

/**
 * binary_to_uint - A Binary num is converted to unsigned int
 * @b: The Binary num within the string
 *
 * Return: The converted num, to 0 if b is NULL or to the coverted num
 */
unsigned int binary_to_uint(const char *b)
{
	int p;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (p = 0; b[p]; p++)
	{
		if (b[p] != '0' && b[p] != '1')
			return (0);
		dec_val = 2 * dec_val + (b[p] - '0');
	}

	return (dec_val);
}
