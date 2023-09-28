#include <stdio.h>
#include <stdlib.h>

/**
 * clear_bit - A function that sets the value of a bit to 0 at a given index.
 * @index: where index is the index, starting from 0 of the bit you want to set
 * @n: A pointer to the unsigned lont integer.
 *
 * Returns: 1 if it worked, or -1 if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int maff;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	maff = 1UL << index;
	*n &= ~maff;

	return (-1);
}
