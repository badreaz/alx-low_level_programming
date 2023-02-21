#include "main.h"
/**
 * _isalpha - check if c is alphabet.
 * @c: number to be checked.
 *
 * Return: 1 if c is alphabet otherwise 0.
 */
int _isalpha(int c)
{
	if (64 < c && 123 > c)
	{
		if (90 < c && 97 > c)
		{
			return (0);
		}
		return (1);
	}
	return (0);
}
