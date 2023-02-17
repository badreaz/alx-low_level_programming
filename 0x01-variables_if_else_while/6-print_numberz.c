#include <stdio.h>

/**
 * main - printdesimal numbers using putchar.
 *
 * Return: 0
 */
int main(void)
{
	int ascii;

	ascii = 48;
	while (ascii <= "9")
	{
		putchar(ascii);
		ascii++;
	}
	putchar('\n');
	return (0);
}
