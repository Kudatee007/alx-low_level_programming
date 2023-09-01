#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints its name, followed by a new line.
 * @argc: The number of argument passed in thr program.
 * @argv: The argument variable.
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
