#include <stddef.h>
#include "main.h"
#include <stdio.h>
/**
 * *_memcpy - A function that copies memory area
 * @dest: Pointer to the destination memory area.
 * @src: Pointer to the source memory area.
 * @n: Number of bytes to copy.
 * Return: A pointer to the beginning of the destination memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *original_dest = dest;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}

	return (original_dest);
}
