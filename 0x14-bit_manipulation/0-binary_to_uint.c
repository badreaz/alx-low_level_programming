#include "main.h"

/**
 * not_b - check if string is only 1 and 0.
 * @b: string.
 *
 * Return: 0 if true, otherwie 1.
 */

int not_b(const char *b)
{
        int i;

        for (i = 0; b[i]; i++)
        {
                if (b[i] != '1' && b[i] != '0')
                        return (1);
        }
        return (0);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string of 0 and 1.
 *
 * Return: the converted number, or 0 if
 *  - there char in the string b that is not 0 or 1.
 *  - b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
        unsigned int value = 0, sum = 0;
        unsigned int i = 0, j = 1, x;

        if (b == NULL || not_b(b))
                return (0);
        while (b[i])
                i++;
        while (j < i + 1)
        {
                if (b[i - j] == '1')
                {
                        for (x = value = 1; x < j; x++)
                                value = value * 2;
                        sum += value;
                }
                j++;
        }
        return (sum);
}
