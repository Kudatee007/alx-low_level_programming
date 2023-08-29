#include <stdio.h>
#include "main.h"

/**
 * _putchar - Custom putchar function.
 * @c: The character to be printed.
 *
 * Return: On success, 1. On error, -1 is returned and errno is set appropriately.
 */

int _putchar(char c)
{
	return write(1, &c, 1);
}

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}

/**
 * print_diagsums - Prints the sum of the diagonals of a square matrix.
 * @a: Pointer to the start of the square matrix.
 * @size: Size of the square matrix.
 */

void print_diagsums(int *a, int size)
{
	int main_sum = 0;
	int secondary_sum = 0;
	int i = 0;

	for (i = 0; i < size; i++)
	{
		main_sum += a[i * size + i];
		secondary_sum += a[i * size + (size - 1 - i)];
	}

	print_number(main_sum);
	_putchar('\n');

	print_number(secondary_sum);
	_putchar('\n');
}
