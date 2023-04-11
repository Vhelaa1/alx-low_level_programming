#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of our program
 * @ac: the count
 * @av: pointer to args
 *
 * Return: return a string conctaenating all args
 * Otherwise, NULL
 */

char *argstostr(int ac, char **av)
{
	char *str_output;
	int i, j, output_index, total_size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			total_size++;
	}
	str_output = malloc(sizeof(char) * total_size + 1);

	if (str_output == NULL)
		return (NULL);

	output_index = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str_output[output_index++] = av[i][j];

		str_output[output_index++] = '\n';
	}

	str_output[total_size] = '\0';
	return (str_output);
}
