#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns the number of coins necessary to give the change
 *
 * @argc: int number of args
 * @argv: array holding argument values as strings
 *
 * Return: 0 if argc=2 and prints minimum num of coins
 * 1 otherwise
 */
int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int count = 0;
	int i;
	int change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	change = atoi(argv[1]);

	for (i = 0; i < 5; i++)
	{
		count += change / coins[i];
		change %= coins[i];
	}

	printf("%d\n", count);
	return (0);
}
