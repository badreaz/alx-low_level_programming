#include "main.h"

/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian.
 */

int get_endianness(void)
{
	unsigned int n = 6;
	char *ptr = (char *)&n;

	if (*ptr)
		return (1);
	return (0);
}
