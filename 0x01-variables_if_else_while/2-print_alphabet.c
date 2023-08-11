#include <stdio.h>
/**
 * main - Entry point for this program
 * Description: A program that prints the alphabet in lowercase
 * Return: Success
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
