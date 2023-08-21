#include "main.h"

/**
 * _isdigit - check if the character is a digit.
 * @c: number in ascii code.
 *
 * Return:
 * - if true 1.
 * - otherwise 0.
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}