#include <stdio.h>

/**
 * main - print hexadecimal
 * Return: 0 if successful
 */
int main(void)
{
	char ch;
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar (n);
	}

	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar (ch);
	}
	putchar (10);
	return (0);
}