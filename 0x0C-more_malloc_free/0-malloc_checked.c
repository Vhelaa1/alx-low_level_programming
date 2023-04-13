#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: size of allocated memory
 * Return: pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL || b > sizeof(i))
	{
		return (NULL);
	}
	return (i);
}