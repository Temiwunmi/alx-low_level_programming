#include <stdio.h>

/**
 * main - print combination
 * Return: 0 if successful
 */
int main(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
		putchar (ch);
		if (ch != 57)
		{
			putchar (44);
			putchar (32);
		}
	}
	putchar (10);
	return (0);
}
