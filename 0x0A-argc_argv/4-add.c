#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds all arguments
 *
 * @argc: int number of args
 * @argv: array holding argument values as strings
 *
 * Return: 0 if all args passed are digits and prints their sum
 * 1 otherwise and
 */
int main(int argc, char *argv[])
{
	unsigned int j;
	int i, sum;
	int is_digit;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			is_digit = 1;
			if (!isdigit(argv[i][j]))
			{
				is_digit = 0;
				break;
			}
		}
		if (!is_digit)
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
