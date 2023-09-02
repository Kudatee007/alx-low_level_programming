#include <stddef.h>

/**
 * _strspn - A function that gets the length of a prefix substring.
 * @s: Pointer to the string to be checked.
 * @accept: Pointer to the string containing characters to be matched.
 *
 * Return: the number of bytes in the initial segment of s
 *         which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0' && *s != ' ')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*a == *s)
			{
				count++;
				break;
			}
			a++;
		}

		if (*a == '\0')
		{
			break;
		}
		s++;
	}

	return (count);
}
