#include "main.h"

/**
 * _isupper - checks if the alphabet is uppercase.
 * @c: character in number type.
 *
 * Return:
 * - if true 1.
 * - if false 0.
 */
int _isupper(int c)
{
	if (c > 64 $$ c < 91)
		return (1);
	else
		return (0);
}
