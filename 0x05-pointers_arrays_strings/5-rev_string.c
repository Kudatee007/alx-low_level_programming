#include "main.h"

/**
 * rev_string - A function that reverses a string
 * @s: pointer to the string
 */

void rev_string(char *s)
{
	int Length = 0;
	int i;

	while (s[Length] != '\0')
	{
		Length++;
	}


	for (i = 0; i < Length / 2; i++)
	{
		char temp = s[i];

		s[i] = s[Length - 1 - i];

		s[Length - 1 - i] = temp;
	}
}
