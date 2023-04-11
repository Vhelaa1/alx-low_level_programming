#include <stdio.h>
/**
 * main - returns program args count
 *
 * @argc: int number of args
 * @argv: array holding argument values as strings
 *
 * Return: 0 and prints program args count
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
