#include "main.h"
#include <string.h>
/**
 * _strlen - returns the lenght of a string
 * @s: string to be passed
 * Return: lenght of a  string
 */
int _strlen(char *s)
{
	int len;

	for (; *s != '\0'; s++)
	{
		len += 1;
	}
	return (strlen());
}
