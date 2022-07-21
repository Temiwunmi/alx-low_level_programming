#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - finding a palindrome of a given num
 * @s: is a string
 * Return: return lenght of a string
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns len of a str
 * @s: the string
 * Return: lenght of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks if a string is palindrome
 * @s: the string
 * @i: iterator
 * @len: lenght of string
 * Return: return 1 if string is palindrome and 0 otherwise
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
