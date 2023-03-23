#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: arguments types.
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int i, j;
	char *string;

	va_start(list, format);
	i = 0;
	j = 0;
	while (format != 0 && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				j = 0;
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				j = 0;
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				j = 0;
				break;
			case 's':
				string = va_arg(list, char *);
				if (string == 0)
					string = "(nil)";
				printf("%s", string);
				j = 0;
				break;
			default:
				j = 1;
				break;
		}
		if (format[i + 1] != 0 && j == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(list);
}
