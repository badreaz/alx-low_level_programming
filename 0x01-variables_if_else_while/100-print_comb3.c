#include <stdio.h>

/**
 * main - print combination of 2 numbers without repeating using putchar.
 *
 * Return: 0
 */
int main(void)
{
	int ascii;
	int ascii2;

	ascii = 48;
	while (ascii <= '9')
	{
		ascii2 = ascii + 1;
		while (ascii2 <= '9')
		{
			putchar(ascii);
			putchar(ascii2);
			if (ascii <= '9' && ascii2 <= '9')
			{
				putchar(',');
				putchar(' ');
			}
			ascii2++;
		}
		ascii++;
	}
	putchar('\n');
	return (0);
}
