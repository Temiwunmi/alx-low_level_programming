#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free grid alloc
 * @grid: pointer
 * @height: of grid
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
