#include <stdio.h>
#include <stdlib.h>

/**
 * print_binary - A function that prints the binary representation of a number.
 * @n: number to print.
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}

	putchar((n & 1) ? '1' : '0');
}
