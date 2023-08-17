#include "main.h"

/**
 * print_most_numbers - A function that prints the numbers, from 0 to 9
 */

void print_most_numbers(void)
{
	char digit = '0';

	while (digit <= '9')
	{
		if (digit != '2' && digit != '4')
		{
			_putchar(digit);
		}
		digit++;
	}
	_putchar('\n');
}
