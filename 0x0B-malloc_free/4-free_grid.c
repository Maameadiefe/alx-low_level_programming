#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frres a two dimensional already created grid
 * @height: height of the grid
 * @grid: address of the two dimensional grid
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}

	free(grid);
}
