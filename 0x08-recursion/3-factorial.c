#include "main.h"

/**
 * factorial - get the factorial of a number
 * @n: a number
 * Return: an integer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
