#include "main.h"

int _sqrt(int, int);
/**
 * _sqrt_recursion - square root using recusion
 * @n: parameter to sqrt
 * Return: sqrt of a num
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - recursive sqrt
 * @n: number
 * @i: iterator
 * Return: a number
 */
int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);
	if (square == n)
		return (i);
	return (_sqrt(n, i + 1));
}
