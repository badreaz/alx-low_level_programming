#include <stdio.h>

/**
 * main - print lower and upper case alphabets.
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
		alphabet++;
	}
	alphabet = 'A';
	while (alphabet <= 'Z')
	{
		putchar(alphabet);
		if (alphabet == 'Z')
		{
			putchar('\n');
		}
	}
	return (0);
}
