#include <stdio.h>

/**
 * main - program that prints num og arguements
 * @args: arg count
 * @argv: arg vector
 * Return: return 0
 */
int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}
