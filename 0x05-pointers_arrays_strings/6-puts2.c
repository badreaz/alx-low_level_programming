#include "main.h"

/**
 * puts2 - prints every other character of a string.
 * @str: pointer to string.
 */
void puts2(char *str)
{
	int n = 0;

	for (; *str != '\0'; str++)
	{
		if (n % 2 == 0)
			_putchar(*str);
		n++;
	}
	_putchar('\n');
}
