#include "main.h"
#include <unistd.h>

/**
 * print_rev - A function that prints a string, in reverse
 * @s: character to check
 */

void print_rev(char *s)
{
	int Length = 0;
	int i;

	while (s[Length] != '\0')
		Length++;

	for (i = Length - 1; i >= 0; i--)
		write(STDOUT_FILENO, &s[i], 1);

	write(STDOUT_FILENO, "\n", 1);
}
