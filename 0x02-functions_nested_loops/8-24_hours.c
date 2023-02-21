#include "main.h"
/**
 * jack_bauer - print every minute of the day.
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i;
	int x;
	int j;
	int k;

	i = 0;
	while (i < 3)
	{
		x = 0;
		while (x < 10)
		{
			if (i == 2 && x == 4)
			{
				break;
			}
			j = 0;
			while (j < 6)
			{
				k = 0;
				while (k < 10)
				{
					_putchar(i + '0');
					_putchar(x + '0');
					_putchar(':');
					_putchar(j + '0');
					_putchar(k +'0');
					_putchar('\n');
					k++;
				}
				j++;
			}
			x++;
		}
		i++;
	}
}
