#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 * Return: the converted number and  result
 */
unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
	{
	return (0);
	}
	unsigned int result = 0;
	int i = strlen(b) - 1;
	int weight = 1;

	while (i >= 0)
	{
	if (b[i] == '1')
	{
	result += weight;
	}
	else if (b[i] != '0')
	{
	return (0);
	}
	weight *= 2;
	i--;
	}
	return (result);
}
