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
	int **ret;

	if (width < 1 || height < 1)
		return (NULL);
	grid = (int **)malloc(sizeof(int) * width * height);
	if (grid == NULL)
		return (NULL);
	ret = grid;
	h = 0;
	while (h < height)
	{
		w = 0;
		while (w < width)
		{
			grid[h][w] = 0;
			w++;
		}
		h++;
	}
	return (ret);
}
