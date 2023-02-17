#include <stdio.h>

/**
 * main - print lowercase alphabet using putchar.
 *
 * Return: 0
 */
int main(void)
{
	char alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		putchar(alphabet);
		if (alphabet == 'z')
		{
			putchar('\n');
		}
		alphabet++;
	}
	return (0);
}
