#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print numbers from n to 98.
 * @n: the starting integer.
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	printf("98\n");
}
