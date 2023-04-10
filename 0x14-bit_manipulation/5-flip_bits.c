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
	unsigned int i, num = 0, n_bit, m_bit;

	for (i = 0; i < sizeof(n) * 8 - 1; i++)
	{
		n_bit = (n >> i) & 1;
		m_bit = (m >> i) & 1;
		if (n_bit != m_bit)
		{
			n = n & ~(1 << i);
			num++;
		}
	}
	return (num);
}
