#include "main.h"
#include <stdlib.h>

/**
 * free_grid - freed a 2 dimensional grid
 * @grid: 2 dimensional array
 * @height: height of rows
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
