#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - A function that concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * Return: returned pointer should point to a newly allocated space
 *         in memory which contains the content of s1, followed by
 *         the contents of s2, and null is terminated.
 */

char *str_concat(char *s1, char *s2)
{
	char *result;
	size_t len1, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	result = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (result != NULL)
	{
		strcpy(result, s1);

		strcat(result, s2);
	}

	return (result);
}
