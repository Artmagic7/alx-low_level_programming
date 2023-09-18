#include "main.h"

/**
 * _strspn - returns the length of the initial segment of s
 * which consists entirely of characters in accept
 * @s: input string
 * @accept: accepted characters
 *
 * Return: number of bytes in the initial segment of s
 * which only contain characters from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *p_accept;

	while (*s)
	{
		p_accept = accept;

		while (*p_accept)
		{
			if (*s == *p_accept)
			{
				count++;
				break;
			}

			p_accept++;
		}

		if (!*p_accept)
			return (count);

		s++;
	}

	return (count);
}
