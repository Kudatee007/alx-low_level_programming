#include <stdio.h>

/**
 * Main - A program that prints the name of the file it was
 *        compiled from, followed by a new line.
 * Return: 0 success
 */

int main(void)
{
	_putchar("%s\n", __FILE__);
	return (0);
}
