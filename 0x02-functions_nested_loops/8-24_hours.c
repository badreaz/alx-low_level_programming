#include "main.h"
/**
 * jack_bauer - print every minute of the day.
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int digit;

	i = 0;
	while (i < 24)
	{
		j = 0;
		while (j < 6)
		{
			k = 0;
			while (k < 10)
			{
				digit = i % 100;
				_putchar(digit + '0');
				digit = i % 10;
				_putchar(digit + '0');
				_putchar(':');
				_putchar(j + '0');
				_putchar(k +'0');
				_putchar('\n');
				k++;
			}
			j++;
		}
		i++;
	}
}
