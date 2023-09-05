#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - A function that frees a 2 dimensional grid previously
 *             created by your alloc_grid function.
 * @grid: The address of the two dimensional grid.
 * @height: height of the grid.
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
			grid[i] = NULL;
		}

		free(grid);
	}
}
