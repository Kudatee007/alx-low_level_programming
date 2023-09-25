#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints an integer.
 * @n: The integer to print.
 * Return: 0
 */
void print_number(int n)
{
	unsigned int n1;

	n1 = n;
	if (n < 0)
	{
	_putchar('-');
	n1 = -n;
	}

	if (n / 10 != 0)
	{
	print_number(n / 10);
	}

	_putchar((n1 % 10) + '0');
}
