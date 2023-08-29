#include <stdio.h>
#include "main.h"

/**
 * *_strpbrk - A function that searches a string
 *             for any of a set of bytes.
 * @s: The string to search within
 * @accept: The set of bytes to search for.
 * Return: A pointer to the byte in s that matches one of the bytes
 *         in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *current_accept = accept;

		while (*current_accept)
		{
			if (*current_accept == *s)
			{
				return (s);
			}
			current_accept++;
		}
		s++;
	}

	return (NULL);
}
