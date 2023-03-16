#include "main.h"

/**
 * _calloc - allocates memor for an array.
 * @nmemb: number of elements.
 * @size: byte of element.
 *
 * Return: pointer to memory, otherwise 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	while (i < nmemb)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
