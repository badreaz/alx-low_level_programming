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
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size < old_size)
		return (NULL);
	new = malloc(new_size);
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	while (ptr != 0 && i < new_size)
	{
		new[i]  = *p;
		p++;
		i++;
	}
	return (new);
}
