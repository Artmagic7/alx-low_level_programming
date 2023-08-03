#include "main.h"

/**
 * get_endianness -A little or big endian machine checker
 * Return: 0 if it's big, 1 if it's  little
 */
int get_endianness(void)
{
	unsigned int t = 1;
	char *c = (char *) &t;

	return (*c);
}
