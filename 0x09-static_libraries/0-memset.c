#include <stddef.h>

/**
 * *_memset - A function that fills memory with a constant byte.
 * @s: Pointer to the memory area to be filled
 * @b: Constant byte value to fill the memory with.
 * @n: Number of bytes to fill
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *original_s = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}

	return (original_s);
}
