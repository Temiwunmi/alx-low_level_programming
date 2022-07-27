#include "main.h"
#include <string.h>

/**
 * _memset - memory set function
 * @s: string
 * @b: a charcter
 * @n: an integer
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
		return (memset(s, b, n));
}
