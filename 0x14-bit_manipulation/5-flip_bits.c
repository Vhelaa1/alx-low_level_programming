#include "main.h"
/**
 * flip_bits - flip to go from one number to another.
 * @n: numb1
 * @m: numb2
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, res;
	unsigned int j, i;

	j = 0;
	res = 1;
	diff = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (res == (diff & res))
			j++;
		res <<= 1;
	}

	return (j);
}
