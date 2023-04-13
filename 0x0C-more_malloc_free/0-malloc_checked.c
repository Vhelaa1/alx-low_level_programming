table File  20 lines (17 sloc)  280 Bytes
 

#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -allocates memory using malloc.
 * @b: allocated memo
 * Return: pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	char *i;

	i = malloc(b);
	if (i == NULL)
	{
		exit(98);
	}
	return (i);
}