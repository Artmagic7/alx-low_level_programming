#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << 63; /* mask to isolate highest bit */

	while (mask > 0) /* loop through all bits */
	{
		if ((n & mask) == 0) /* bit is 0 */
			_putchar('0');
		else /* bit is 1 */
			_putchar('1');
		mask >>= 1; /* shift mask to next bit */
	}
}
