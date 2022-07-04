#include <stdio.h>

/**
 * main - print numbers
 * Return: 0 if successful and non zero if not
 */
int main(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
		putchar (ch);
	}
	putchar (10);
	return (0);
}
