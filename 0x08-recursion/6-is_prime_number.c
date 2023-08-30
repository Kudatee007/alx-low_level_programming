#include <stdio.h>
#include "main.h"

int is_prime_recursive(int n, int divisor);

/**
 * is_prime_number - Checks if a number is a prime number
 * @n: The number to be checked
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (is_prime_recursive(n, 2));
	}
}

/**
 * is_prime_recursive - Recursive helper function to check if a number is prime
 * @n: The number to be checked
 * @divisor: The current divisor to be checked
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_recursive(int n, int divisor)
{
	if (divisor >= n)
	{
		return (1);
	}
	else if (n % divisor == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_recursive(n, divisor + 1));
	}
}
