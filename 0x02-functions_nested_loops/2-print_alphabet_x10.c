#include "main.h"

/**
 * print_alphabet_x10 - A function that prints 10
 *                      times the alphabet, in lowercase
 */

void print_alphabet_x10(void)
{
	int i = 0;


	while (i <= 10)
	{
		char letter = 'a';
	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar(i);
	i++;
	}
}
