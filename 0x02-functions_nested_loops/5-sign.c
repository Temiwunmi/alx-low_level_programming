#include "main.h"

/**
 * print_sign - print signs
 * @n: integer
 * Return: 1, 0 and -1 if greater less and equal
 */
int print_sign(int n)
{
	if (n > 0)
		{
			_putchar ('+');
			return (1);
		}
	else if (n == 0)
		{	
			_putchar ('0');
			return (0);
		}
	else
		(n < 0)
		{
			_putchar ('-');
			return (-1);
		}
}
