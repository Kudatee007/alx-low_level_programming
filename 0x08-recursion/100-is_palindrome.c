#include <stdio.h>
#include "main.h"

int is_palindrome_recursive(char *s, int start, int end);

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to be checked
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int length = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		length++;
		i++;
	}

	return (is_palindrome_recursive(s, 0, length - 1));
}

/**
 * is_palindrome_recursive - Recursive helper
 * function to check if a string is a palindrome
 * @s: The string to be checked
 * @start: The starting index for the comparison
 * @end: The ending index for the comparison
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */

int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	else if (s[start] != s[end])
	{
		return (0);
	}
	else
	{
		return (is_palindrome_recursive(s, start + 1, end - 1));
	}
}
