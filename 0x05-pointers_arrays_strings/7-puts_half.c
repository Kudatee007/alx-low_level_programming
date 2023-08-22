#include "main.h"

/**
 * puts_half - Prints the second half of a string, followed by a new line
 * @str: Pointer to the string
 */
void puts_half(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
	length++;
	}

	if (length % 2 == 0)
	{
	length /= 2;
	}
	else
	{
	length = (length - 1) / 2;
	}

	while (str[length] != '\0')
	{
	_putchar(str[length]);
	length++;
	}

	_putchar('\n');
}

