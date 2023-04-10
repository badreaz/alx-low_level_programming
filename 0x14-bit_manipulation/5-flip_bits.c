#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 *  to get from one number to another.
 * @n: number to flip from.
 * @m: number to flip to.
 *
 * Return: number of flips in bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, nxm;
	unsigned int num = 0;

	nxm = n ^ m;
	for (i = 31; i >= 0; i--)
	{
		if ((nxm >> i) & 1)
		{
			num++;
		}
	}
	return (num);
}
