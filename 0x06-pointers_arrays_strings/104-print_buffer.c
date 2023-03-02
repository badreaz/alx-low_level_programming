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

	while (i < size)
	{
		if (b[i] < 32)
			b[i] = '.';
		i++;
	}
	printf("%08x: ", *b);
	for (i = 0; i < 98; i += 2)
	{
		if (b[i] == 0)
			printf("     ");
		if (!(i % 10) && i)
		{
			for (j = 0; j < 10; j++)
			{
				printf("%c", b[x]);
				x++;
			}
			printf("\n %08x: ", b[i]);
		}
		printf("%02x%02x ", b[i], b[i + 1]);
	}
	printf("\n");
}
