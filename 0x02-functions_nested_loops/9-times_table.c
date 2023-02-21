
/**
 * times_table - print the nine times table.
 */
void times_table(void)
{
	int i;
	int j;

	i = 0;
	while(i < 10)
	{
		j = 0;
		while(j < 10)
		{
			if (j == 0)
			{
				_putchar('0');
				_putchar(',');
			}
			_putchar((i * j) + '0');
			if (j < 9)
			{
				_putchar(',');
			}
			j++;
		}
		i++;
	}
}
