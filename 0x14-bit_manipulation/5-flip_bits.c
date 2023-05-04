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
        int i;
        unsigned long int num = 0, nxm;

        nxm = n ^ m;
        for (i = 63; i >= 0; i--)
        {
                if ((nxm >> i) & 1)
                {
                        num++;
                }
        }
        return (num);
}
