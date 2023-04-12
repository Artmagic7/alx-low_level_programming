#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int len = 0;

	/* find the length of the binary representation */
	while ((n >> len) != 0)
		len++;

	/* print the binary representation */
	if (len == 0)
		_putchar('0');
	else
	{
		while (len--)
		{
			if ((n & (mask << len)) != 0)
				_putchar('1');
			else
				_putchar('0');
		}
	}
}
