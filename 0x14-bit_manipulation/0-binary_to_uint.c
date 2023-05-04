#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 * @b: A pointer to a string of 0 and 1 characters.
 *
 * Return: The converted number as an unsigned integer, or 0 if is invalid.
 */
unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int result;

	result = 0;
	if (!b)
		return (0);
	for (index = 0; b[index] != '\0'; index++)
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);
	}
	for (index = 0; b[index] != '\0'; index++)
	{
		result <<= 1;
		if (b[index] == '1')
			result += 1;
	}
	return (result);
}
