#include <stdio.h>
#include <stdlib.h>

/**
 * get_bit - A function that returns the value of a bit at a given index.
 * @index: where index is the index, starting from 0 of the bit you want to get
 * @n: The unsigned long integer.
 *
 * Returns: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int binss;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	binss = 1UL << index;
	return ((n & binss) ? 1 : 0);
}
