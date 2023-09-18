#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to pointer
 * @to: pointer char
 */

void set_string(char **s, char *to)
{
	int i = 0;

	while (to[i] != '\0')
	{
	(*s)[i] = to[i];
	i++;
	}

	(*s)[i] = '\0';
}
