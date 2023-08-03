#include <stdio.h>
#include "main.h"

/**
* binary_to_uint - a func that converts a binary number to an unsigned int
* @b: The Binary num String
* Return: The Binary num interger
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int p;

	if (b == NULL)
		return (0);
	for (p = 0; b[p] != '\0'; p++)
	{
		if (b[p] != '0' && b[p] != '1')
			return (0);
		num <<= 1;
		num += b[p] - '0';
	}
	return (num);
}
