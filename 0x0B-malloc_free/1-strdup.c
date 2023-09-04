#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - A function that returns a pointer to a newly allocated space in
 *           memory, which contains a copy of the string given as a parameter.
 * @str: The string to duplicate.
 * Return: return NULL if str = NULL and returns NULL if insufficient memory
 *         was available.
 */


char *_strdup(char *str)
{
	char *duplicate;
	size_t len;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);

	duplicate = (char *)malloc((len + 1) * sizeof(char));

	if (duplicate != NULL)
	{
		strcpy(duplicate, str);
	}

	return (duplicate);
}
