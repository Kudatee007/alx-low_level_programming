#include "main.h"

/**
 * string_toupper - Converts lowercase letters to uppercase in a string.
 * @str: The string to modify.
 *
 * Return: A pointer to the resulting string.
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
	if (*ptr >= 'a' && *ptr <= 'z')
	{
	*ptr = *ptr - ('a' - 'A');
	}
	ptr++;
	}
	return (str);
}
