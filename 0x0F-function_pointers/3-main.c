#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - ...
  * @argc: ...
  * @argv: ...
  *
  * Return: ...
  */
int main(int argc, char *argv[])
{
	int (*opr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	opr = get_op_func(argv[2]);

	if (!opr)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", opr(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
