#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc.
 * @ptr: pointer to memory.
 * @old_size: bytes of allocated memory.
 * @new_size: bytes of memory to be allocated.
 *
 * Return: pointer to memory, otherwise NULL;
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new;
	char *p = ptr;
	unsigned int i = 0;

	if (old_size == new_size)
		return (ptr);
	else if (ptr == NULL)
	{
		new = malloc(new_size);
		return (new);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new = malloc(new_size * sizeof(char));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	while (p != 0 && i < old_size)
	{
		new[i]  = *p;
		p++;
		i++;
	}
	free(ptr);
	return (new);
}
