#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - A function that searches for an integer.
 * @array: Pointer to the integer array.
 * @size: Size of the array.
 * @cmp: Pointer to the comparison function.
 *
 * Return: returns the index of the first element for which
 *         the cmp function does not return 0 If no element
 *         matches, return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}

	return (-1);
}
