#include <stdio.h>

/**
 * main - pritn a combination of four numbers without repition using putchar.
 *
 * Return: 0
 */
int main(void)
{
	int num;
	int num2;
	int num3;
	int num4;

	num = 48;
	while (num <= '9')
	{
		num2 = 48;
		while (num2 <= '9')
		{
			num3 = num;
			while (num3 <= '9')
			{
				num4 = num2;
				while (num4 <= '9')
				{
					if (num3 == num)
					{
						num4++;
					}
					putchar(num);
					putchar(num2);
					putchar(' ');
					putchar(num3);
					putchar(num4);
					if (num < '9')
					{
						putchar(',');
						putchar(' ');
					}
					num4++;
				}
				num3++;
			}
			num2++;
		}
		num++;
	}
	putchar('\n');
	return (0);
}
