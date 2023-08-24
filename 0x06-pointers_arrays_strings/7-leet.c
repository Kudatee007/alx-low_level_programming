#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The string to encode.
 *
 * Return: A pointer to the resulting encoded string.
 */
char *leet(char *str)
{
	char *ptr = str;
	char leet_map[] = "aAeEoOtTlL";
	char leet_replacement[] = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
	for (j = 0; leet_map[j] != '\0'; j++)
	{
	if (str[i] == leet_map[j])
	{
	str[i] = leet_replacement[j];
	break;
	}
	}
	}
	return (ptr);
}
