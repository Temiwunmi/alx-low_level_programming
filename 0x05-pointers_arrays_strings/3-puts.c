#include "main.h"

/**
 * _puts - this prints a string
 * @str: a parameter to puts functiom
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
	
