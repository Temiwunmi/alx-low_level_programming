#include <stdio.h>

/**
 * main - prints combination of numbers
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	int ch;
	int n;

	for (ch = 48; ch <= 57; ch++)
	{
		for (n = 48; n <= 57; n++)
		{
			putchar (ch);
			putchar (n);

			if (ch != 56 || n != 57)
			{
				putchar (44);
				putchar (32);
			}
		}
	}
	return (0);
}
