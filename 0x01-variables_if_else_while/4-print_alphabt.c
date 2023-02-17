#include <stdio.h>

/**
 * main - print loewer case alphabet except 'q' and 'e'.
 *
 * Return: 0
 */
int main(void)
{
	char alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		if (alphabet == 'e')
		{
			alphabet++;
		}
		else if (alphabet == 'q')
		{
			alphabet++;
		}
		putchar(aphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
