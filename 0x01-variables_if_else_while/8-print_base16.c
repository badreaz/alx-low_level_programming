#include <stdio.h>

/**
 * main - print hexadecimals in lowercase using putchar.
 *
 * Return: 0
 */
int main(void)
{
	int hexa;

	hexa = 48;
	while (hexa <= '9')
	{
		putchar(hexa);
		hexa++;
	}
	hexa = 97;
	while (hexa <= 'f')
	{
		putchar(hexa);
		hexa++;
	}
	putchar('\n');
	return (0);
}
