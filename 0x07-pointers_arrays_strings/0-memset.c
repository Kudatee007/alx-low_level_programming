#include <stdio.h>
#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area pointed to by s with the constant byte b.
 * @s: Pointer to the memory area to be filled.
 * @b: The constant byte to fill the memory with.
 * @n: Number of bytes to fill.
 *
 * Return: Pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * simple_print_buffer - Prints buffer in hexadecimal format.
 * @buffer: The address of memory to print.
 * @size: The size of the memory to print.
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
	}
	printf("\n");
}

/**
 * main - Entry point of the program.
 *
 * Description: Demonstrates the use of the _memset function.
 * It fills a buffer with zeros, then fills it with ones, and prints the result.
 *
 * Return: Always 0.
 */
int main(void)
{
	char buffer[98] = {0x00};

	simple_print_buffer(buffer, 98);
	_memset(buffer, 0x01, 95);
	printf("-------------------------------------------------\n");
	simple_print_buffer(buffer, 98);
	return (0);
}
