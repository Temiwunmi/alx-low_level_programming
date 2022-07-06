#include "main.h"

/**
 * _isalpha - print both lowercase and uppercase
 * @c: character arguement
 * Return: 1 if c is letter, lowercae or upper case and return 0 if otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c >= 'Z'));
}
