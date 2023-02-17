#include <stdio.h>

/**
 * main - pritn a combination of three numbers without repition using putchar.
 *
 * Return: 0
 */
int main(void)
{
	int num;
	int num2;
	int num3;

	num = 48;
	while (num <= '9')
	{
		num2 = num + 1;
		while (num2 <= '9')
		{
			num3 = num2 + 1;
			while (num3 <= '9')
			{
				putchar(num);
				putchar(num2);
				putchar(num3);
				if (num < '7')
				{
					putchar(',');
					putchar(' ');
				}
				num3++;
			}
			num1++;
		}
		num++;
	}
	putchar('\n');
	return (0);
}
