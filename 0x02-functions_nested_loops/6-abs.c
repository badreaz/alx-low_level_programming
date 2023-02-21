#include "main.h"
/**
 * _abs - compute the absolute value.
 *
 * Return: absolute value.
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	n = 0 - n;
	return (n);
}
