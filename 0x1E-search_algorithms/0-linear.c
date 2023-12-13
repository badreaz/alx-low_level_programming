#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 *  using the Linear search algorithm
 * @array:pointer to the array.
 * @size: array's number of elements.
 * @value: value to search of.
 *
 * Return: index of the value, otherwise -1.
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (!array)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
