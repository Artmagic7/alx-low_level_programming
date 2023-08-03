#include "main.h"
#include <unistd.h>

/**
 * _putchar - the character c is written to stdout
 * @c: The character that is printed
 *
 * Return: 1 during success, -1 during an error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

