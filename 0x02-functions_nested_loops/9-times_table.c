#include "main.h"

/**
 * times_table - Prints the 9 times table.
 */
void times_table(void)
{
	int row, column, product;

	for (row = 0; row <= 9; row++)
	{
	for (column = 0; column <= 9; column++)
	{
	product = row * column;

	if (column == 0)
	{
	_putchar('0' + product);
	}
	else
	{
	_putchar(' ');
	if (product <= 9)
	_putchar(' ');
	else
	_putchar('0' + (product / 10));
	_putchar('0' + (product % 10));
	}
	if (column < 9)
	_putchar(',');
	}
	_putchar('\n');
	}
}
