#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all args
 * @argc: args count
 * @argv: args vector
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
