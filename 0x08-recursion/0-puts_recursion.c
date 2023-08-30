#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - A unction that prints a string, followed by a new line.
 * @s: character to print.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
