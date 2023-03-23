#include "variadic_functions.h"

/**
 * print_numbers - print numbers.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i, j;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if ((i < n - 1) && separator != 0)
		{
			for (j = 0; separator[j]; j++)
				printf("%c", separator[j]);
		}
	}
	printf("\n");
}
