#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum value of range
 * @max: maximum value of range and number of elements
 *
 * Return: pointer to the new array or NULL if allocation fails
 */
int *array_range(int min, int max)
{
	int *array_ptr;
	int i, array_size;

	if (min > max)
		return (NULL);

	array_size = max - min + 1;

	array_ptr = malloc(sizeof(int) * array_size);

	if (array_ptr == NULL)
		return (NULL);

	for (i = 0; i < array_size; i++)
		array_ptr[i] = min_value++;

	return (array_ptr);
}

