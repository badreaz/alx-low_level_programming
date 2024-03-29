#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number.
 * @index: bit index.
 *
 * Return: the value of the bit at index index or -1 if an error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (sizeof(n) * 8 - 1 < index)
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}
