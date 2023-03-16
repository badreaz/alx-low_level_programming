#include "main.h"

/**
 * malloc_checked - allocates memory.
 * @b: number of bytes.
 *
 * Return:
 *  - pointer to memory.
 *  - if failed 98.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		free(p);
		exit(98);
	}
	return (p);
}
