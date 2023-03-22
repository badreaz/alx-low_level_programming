#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - returns the sum of a and b. 
 * @a: int.
 * @b: int.
 *
 * Return: addition of a and b.
 */
int op_add(int a, int b)
{
	return(a + b);
}

/**
 * op_sub - returns the subtraction of a and b.
 * @a: int.
 * @b: int.
 *
 * Return: subtraction of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_sub - returns the product of a and b.
 * @a: int.
 * @b: int.
 *
 * Return: product of a and b.
 */
int op_mul(int a, int b)
{
        return (a * b);
}

/**
 * op_sub - returns the result of a and b.
 * @a: int.
 * @b: int.
 *
 * Return: result of a and b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
        return (a / b);
}

/**
 * op_sub - returns the remainder of division of a and b.
 * @a: int.
 * @b: int.
 *
 * Return: remainder of division of a and b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
        return (a % b);
}
