#include "main.h"
/**
 * times_table - print the nine times table.
 */
void times_table(void)
{
	int i;
	int j;
	int result;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (j == 0)
			{
				_putchar('0');
				_putchar(',');
			}
			result = i * j;
			if (result % 1000 == 0)
			{
				_putchar((result % 1000) + '0');
				_putchar((result % 100) + '0');
				_putchar((result % 10) + '0');
			}
			if (j < 9)
			{
				_putchar(',');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
