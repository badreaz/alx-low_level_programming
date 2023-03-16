#include "main.h"

/**
 * array_range - creates an array of integer.
 * @min: number to start with.
 * @max: number to end with.
 *
 * Return: pointer to array, otherwise NULL.
 */
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	i = 0;
	while (i <= (max - min))
	{
		p[i] = min + i;
		i++;
	}
	return (p);
}
