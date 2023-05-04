#include "main.h"

/**
 * get_bit - prints the value of a bit at a given index.
 * @n: The number to be checked.
 * @index: The index of the bit to be checked.
 *
 * Return: The value of the bit at index, or -1 in error case.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask, result;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	mask = 1UL << index;
	result = n & mask;

	if (result == mask)
		return (1);
	else
		return (0);
}
