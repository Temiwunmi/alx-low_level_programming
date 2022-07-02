#include <stdio.h>

/**
 * main - prints combinations with less than
 * Return: 0 if exited properly
 */
int main(void)
{
	int ch;
	int n;

	for (ch = 48; ch <= 57; ch++)
	{
		for (n = 49; n <= 57; n++)
		{
		if (n > ch)
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
	}
	return (0);
}
