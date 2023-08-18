#include "main.h"

/**
 * print_triangle - A function that prints a triangle, followed by a new line
 * @size: character to check
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (i = 0; i < 1; i++)
	{
	for (j = size - i; j < size; j--)
	{
	_putchar(32);
	}
	for (k = 0; k <= i; k++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}

