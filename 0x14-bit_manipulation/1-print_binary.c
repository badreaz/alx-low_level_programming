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
Hol
#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: nummber.
 */

void print_binary(unsigned long int n)
{
        unsigned long int j;
        int i, flag;

        if (n == 0)
                _putchar('0');

        for (i = sizeof(n) * 8 - 1; i >= 0; i--)
        {
                j = n >> i;
                if (j & 1)
                {
                        _putchar('1');
                        flag = 1;
                }
                else if (flag == 1)
                        _putchar('0');
        }
}
