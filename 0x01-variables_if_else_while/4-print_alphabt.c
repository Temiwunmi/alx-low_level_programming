#include <stdio.h>

/**
 * main - print alphabets in main
 * Return: 0 if successful and non zero if otherwise
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar (ch);
		}
	}
	putchar (10);
	return (0);
}
