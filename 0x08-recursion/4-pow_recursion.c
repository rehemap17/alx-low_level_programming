#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: value to raise
 * @p: power
 *
 * Return: result of the power
 */
int _pow_recursion(int x, int p)
{
	if (p < 0)
		return (-1);
	if (p == 0)
		return (1);
	return (x * _pow_recursion(x, p - 1));
}
