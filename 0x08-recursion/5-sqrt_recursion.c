#include <stdio.h>
#include "main.h"

/**
 * calculate_sqrt - Helper function to calculate the natural square root
 * @n: The number for which to calculate the square root
 * @guess: The current guess for the square root
 * Return: The natural square root of n if found, otherwise -1
 */

int calculate_sqrt(int n, int guess);

/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: The number for which to calculate the square root
 *
 * Return: The natural square root of n if found, otherwise -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (calculate_sqrt(n, 0));
	}
}

/**
 * calculate_sqrt - Helper function to calculate the natural square root
 * @n: The number for which to calculate the square root
 * @guess: The current guess for the square root
 *
 * Return: The natural square root of n if found, otherwise -1
 */

int calculate_sqrt(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	else if (guess * guess > n)
	{
		return (-1);
	}
	else
	{
		return (calculate_sqrt(n, guess + 1));
	}
}
