#include "main.h"

/**
 * print_chessboard - prints the chessboard.
 * @a: pointer to chess array.
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j;
	char c;

	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			c = a[i][j];
			_putchar(c);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
