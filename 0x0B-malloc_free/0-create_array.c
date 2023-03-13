#include "main.h"
#include <stdlib.h>

/**
 * create_array - creat an array of char, and initialize it with c.
 * @size: size of array.
 * @c: char to initalize.
 *
 * Return: NULL if 0 or fail, otherwise pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (0);
	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
		return (0);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
