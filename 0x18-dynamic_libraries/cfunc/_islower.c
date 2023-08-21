#include "main.h"
/**
 * _islower - check if c is a lowercase.
 * @c: number to be checked.
 *
 * Return: 1 if c is lowercase otherwise 0.
 */
int _islower(int c)
{
	if (96 < c && 123 > c)
	{
		return (1);
	}
	return (0);
}