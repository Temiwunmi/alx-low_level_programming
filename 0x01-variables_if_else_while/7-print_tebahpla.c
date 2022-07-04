#include <stdio.h>

/**
 * main - print lowercase alphabet
 * Return: 0 if successful
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar (ch);
	}
	putchar (10);
	return (0);
}
