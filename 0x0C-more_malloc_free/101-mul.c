#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - Checks if a string consists of digits.
 * @str: The input string.
 * Return: 1 if all characters are digits, 0 otherwise.
 */

int is_digit(const char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * multiply - Multiplies two positive numbers.
 * @num1: The first number as a string.
 * @num2: The second number as a string.
 * Return: The product as an integer.
 */

int multiply(const char *num1, const char *num2)
{
	return (atoi(num1) * atoi(num2));
}

int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	if (!is_digit(argv[1]) || !is_digit(argv[2]))
	{
	printf("Error\n");
	return (98);
	}
	result = multiply(argv[1], argv[2]);

	printf("%d\n", result);
	return (0);
}
