#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - A function that creates an array of chars,
 *                and initializes it with a specific char.
 * @size: The size of the character array to create.
 * @c: The character with which to initialize the array elements.
 * Return: NULL if size = 0 and returns a pointer to the
 *         array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *arr = NULL;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = (char *)malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
