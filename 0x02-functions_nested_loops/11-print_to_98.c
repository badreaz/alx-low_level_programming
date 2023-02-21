#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print numbers from n to 98.
 * @n: the starting integer.
 */
void print_to_98(int n)
{
	if (n < 99)
	{
		while (n < 99)
		{
			if (n == 98)
			{
				printf("98\n");
			}
			else 
			{
				printf("%d, ", n);
			}
			n++;
		}
	}
	else
	{
		while (n > 97)
		{
			if (n == 98)
			{
				printf("98\n");
			}
			else
			{
				printf("%d, ", n);
			}
			n--;
		}
	}
}
