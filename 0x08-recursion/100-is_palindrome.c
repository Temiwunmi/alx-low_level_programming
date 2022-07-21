#include "main.h"

/**
 * is_polindrome - finding a palindrome of a given num
 * @s: is a string
 * Return: return lenght of a string
 */
int is_polindrome(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _lenght(s + 1));
}

/**
 * checkp - checks for a palindrome string
 * @i: the index
 * @lg: lgt of string
 * @s: the string
 * Return: 1 if palindrome or 0 otherwise
 */
int checkp(int i, int lg, char *s)
{
	if (lg > 0)
	{
		if (s[i] == s[lg])
		{
			return (checkp(i + 1, lg - 1, s));
		}
		else if (s[i] != s[lg])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}

/**
 * is_polindrome - checks if a string is palindrome
 * @s: the string
 * Return: return 1 if string is palindrome and 0 otherwise
 */
int is_polindrome(char *s)
{
	return (checkp(0, _lenght(s) - 1, s));
}
