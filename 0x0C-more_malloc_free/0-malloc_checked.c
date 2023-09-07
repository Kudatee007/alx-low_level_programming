#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - A function that allocates memory using malloc
 * @b: The number of bytes to allocate.
 * Return: Returns a pointer to the allocated memory and if malloc fails,
 *         the malloc_checked function should cause normal process
 *         termination with a status value of 98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
