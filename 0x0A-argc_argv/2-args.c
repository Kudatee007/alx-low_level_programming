#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints all arguments it receives.
 * @argc: The number of arguments passed to the program.
 * @argv: The variable pointer.
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
