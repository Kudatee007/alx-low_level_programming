#include "main.h"
#include <stdio.h>
#include <unistd.h>


/**
 * _puts - A function that prints a string
 * @str: pointer to the string
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		write(STDOUT_FILENO, &str[i], 1);
		i++;
	}

	write(STDOUT_FILENO, "\n", 1);
}
