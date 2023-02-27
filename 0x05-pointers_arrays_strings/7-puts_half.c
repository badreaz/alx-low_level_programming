#include "main.h"

/**
 * puts_half - prints the second half of a string.
 * @str: pointer to a string.
 */
void puts_half(char *str)
{
	int count = 0;
	char *new = str;

	while (*new != '\0' && new != NULL)
	{
		count++;
		new++;
	}
	if (count % 2 != 0)
		count = (count - 1) / 2;
	else 
		count = count / 2;
	for (str += count; *str != '\0'; str++)
		_putchar(*str);
	_putchar('\n');
}
