#include "variadic_functions.h"

/**
 * sum_them_all - add all the parameters.
 * @n: int.
 * Return: the sum.
 * - if n == 0, return 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	int i, b;

	va_start(num, n);
	i = 0;
	b = n;
	while (b != 0)
	{
		i += va_arg(num, int);
		b--;
	}
	va_end(num);
	return (i);
}
