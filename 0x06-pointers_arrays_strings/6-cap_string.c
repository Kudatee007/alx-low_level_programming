#include "main.h"
#include <stdbool.h>

/**
 * is_separator - Checks if a character is a word separator.
 * @c: The character to check.
 *
 * Return: true if the character is a separator, false otherwise.
 */
bool is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; separators[i] != '\0'; i++)
	{
	if (c == separators[i])
	{
	return (true);
	}
	}
	return (false);
}

/**
 * cap_string - Capitalizes all words in a string.
 * @str: The string to modify.
 *
 * Return: A pointer to the resulting string.
 */
char *cap_string(char *str)
{
	char *ptr = str;
	bool new_word = true;

	while (*ptr != '\0')
	{
	if (is_separator(*ptr))
	{
	new_word = true;
	}
	else if (new_word && (*ptr >= 'a' && *ptr <= 'z'))
	{
	*ptr = *ptr - ('a' - 'A');
	new_word = false;
	}
	else
	{
	new_word = false;
	}
	ptr++;
	}
	return (str);
}
