#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - return array filled with c chars
 *
 * @size: size
 * @c: filling char
 *
 * Return: array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *new_array = malloc(size * sizeof(char));
	unsigned int i = 0;

	if (size == 0 )
		return (NULL);
	if (new_array == NULL)
		return (NULL);

	for (i = 0; i < size * sizeof(char); i++)
	{
		new_array[i] = c;
	}
	return (new_array);
}
