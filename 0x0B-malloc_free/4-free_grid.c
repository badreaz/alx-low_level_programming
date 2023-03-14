#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free 2 dimentional grid in allocated memory.
 * @grid: pointer to grid.
 * @height: number of pointers.
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
