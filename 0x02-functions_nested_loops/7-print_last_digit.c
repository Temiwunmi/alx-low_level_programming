#include "main.h"

/**
 * print_last_digit - print last digit
 * @n: passed arguement
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n = -n;
	x = n % 10;
	_putchar('0' + x);
	_putchar('\n');
	return (x);
}
