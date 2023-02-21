#include <main.h>

/**
 * main - print "_putchar" using _putchar function.
 *
 * Return: 0
 */
int main(void)
{
	char string = "_putchar";

	while (string != '\0')
	{
		_putchar(string);
		string++;
	}
	return (0);
}
