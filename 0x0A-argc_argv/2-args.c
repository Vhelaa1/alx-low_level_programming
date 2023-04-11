#include <stdio.h>
/**
 * main - returns all args it receives
 *
 * @argc: int number of args
 * @argv: array holding argument values as strings
 *
 * Return: 0 and prints all args
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
