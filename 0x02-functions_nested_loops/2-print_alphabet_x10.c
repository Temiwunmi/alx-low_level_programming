#include "main.h"

/**
 * print_alphabet_x10 - prints the lc alphabets 10times
 */
void print_alphabet_x10(void)
{
	int o;
	int p;

	for (p = 0; p < 10; p++)
	{
		for (o = 'a'; o = 'z' o++)
		{
			_putchar(o);
		}
		_putchar('\n');
	}
}
