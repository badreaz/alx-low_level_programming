#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array of int.
 * @size: size of array.
 * @cmp: function pointer.
 * Return: the index of first element
 * to return 1 from cmp, otherwise -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
