#include <stdio.h>

/**
 * main - print using putchar
 * Return: 0 if exited properly, non zero otherwise
 */
int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		putchar (ch);
	}
	for (ch = 65; ch <= 90; ch++)
	{
		putchar (ch);
	}
	return (0);
}
