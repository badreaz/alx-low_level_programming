#include <stdio.h>

/**
 * main - print lower alphabet in reverse using putchar.
 *
 * Return: 0
 */
int main(void)
{
	char reverse;

	reverse = 'z';
	while (reverse >= 'a')
	{
		putchar(reverse);
		reverse--;
	}
	putchar('\n');
	return (0);
}
