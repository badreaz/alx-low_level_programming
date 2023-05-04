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
