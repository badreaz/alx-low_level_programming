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
	int *p;
	char *c;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (size == 1)
	{
		c = malloc(size * nmemb);
		if (c == NULL)
			return (NULL);
		for (i = 0; i < nmemb; i++)
			c[i] = 0;
		return (c);
	}
	else
	{
		p =  malloc(size * nmemb);
		if (p == NULL)
			return (NULL);
		for (i = 0; i < nmemb; i++)
			p[i] = 0;
		return (p);
	}
}
