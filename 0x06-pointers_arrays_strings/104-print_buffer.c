#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer.
 * @b: buffer.
 * @size: size of buffer.
 */
void print_buffer(char *b, int size)
{
	int i = 0, j, x = 0;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x:", i);
		for (x = i; x < i + 10; x++)
		{
			if (x % 2 == 0)
				printf(" ");
			if (x < size)
				printf("%02x", b[x]);
			else
				printf("  ");
		}
		printf(" ");
		for (j = i; j < i + 10; j++)
		{
			if (j >= size)
				break;
			if (b[j] < 32 || b[j] > 126)
				printf(".");
			else
				printf("%c", b[j]);
		}
		printf("\n");
	}
}
