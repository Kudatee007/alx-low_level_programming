#include "main.h"
#include <stdio.h>

/**
 * _strlen - A function that returns the length of a string
 * @s: pointer to the integer
 * Return: Length of the string
 */

int _strlen(char *s)
{
	int Lenght = 0;

	while (*s != '\0')
	{
		Lenght++;
		s++;
	}

	return (Lenght);
}
