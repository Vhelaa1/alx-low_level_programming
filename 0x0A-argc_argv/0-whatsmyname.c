#include <stdio.h>
/**
 * main - returns program name
 *
 * @argc: int number of args
 * @argv: array holding argument values as strings
 *
 * Return: 0 and prints program name
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
