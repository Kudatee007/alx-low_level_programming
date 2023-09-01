#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints the number of arguments passed into it.
 * @argc: The number of argument passed in thr program.
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
