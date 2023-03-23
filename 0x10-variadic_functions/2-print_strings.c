#include "variadic_functions.h"

/**
 * print_strings - print strings.
 * @separator: string to be printed between strings.
 * @n: number of strings.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *string;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(list, char *);
		if (string == 0)
			printf("(nil");
		else
			printf("%s", string);
		if (separator != 0 && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
