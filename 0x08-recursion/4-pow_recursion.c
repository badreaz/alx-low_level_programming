#include "main.h"

/**
 * _pow_recursion - return the value of x raised to the power of y.
 * @x: base.
 * @y: quoetient.
 *
 * Return: x to the power of y.
 */
int _pow_recursion(int x, int y)
{
	int pow = 0;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	pow = _pow_recursion(x, y - 1) * x;
	return (pow);
}
