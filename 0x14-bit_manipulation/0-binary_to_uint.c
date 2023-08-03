#include <stdio.h>
#include "main.h"

/**
* binary_to_uint - This func converts a Binary num to unsigned int
* @b: Binary num string
* Return: Binary num's int
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int q;

	if (b == NULL)
		return (0);
	for (q = 0; b[q] != '\0'; q++)
	{
		if (b[q] != '0' && b[q] != '1')
			return (0);
		num <<= 1;
		num += b[q] - '0';
	}
	return (num);
}
