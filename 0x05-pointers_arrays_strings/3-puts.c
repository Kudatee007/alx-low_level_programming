#include "main.h"
#include <stdio.h>

/**
 * _puts - A function that prints a string
 * @str: pointer to the string
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}

	write(1, "\n", 1);
}

