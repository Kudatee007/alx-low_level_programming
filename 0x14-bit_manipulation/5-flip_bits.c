#include <stdio.h>
#include <stdlib.h>

/**
 * flip_bits - Calculates the number of bits needed to flip
 *             to convert one number to another.
 *
 * @n: The first unsigned long integer.
 * @m: The second unsigned long integer.
 *
 * Return: The number of bits needed to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned long int count = 0;

	while (result > 0)
	{
		count += result & 1;
		result >>= 1;
	}

	return (count);
}
