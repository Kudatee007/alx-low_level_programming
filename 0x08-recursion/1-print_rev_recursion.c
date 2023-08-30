#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - A function that prints a string in reverse.
 * @s: String to reverse.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
