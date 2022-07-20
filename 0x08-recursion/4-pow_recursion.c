#include "main.h"

/**
 * _pow_recursion - using raise to power
 * @x: x raised to power y
 * @y: the power num
 * Return: power result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
