#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to two dimentional array of int.
 * @width: number for colunm.
 * @height: number of row.
 *
 * Return: pointer to a pointer, or NULL.
 */
int **alloc_grid(int width, int height)
{
	int h = 0, w = 0;
	int **grid;

	if (width < 1 || height < 1)
		return (NULL);
	grid = malloc(sizeof(grid) * height);
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	h = 0;
	while (h < height)
	{
		w = 0;
		grid[h] = malloc(sizeof(int) * width);
		while (w < width)
		{
			grid[h][w] = 0;
			w++;
		}
		h++;
	}
	return (grid);
}
