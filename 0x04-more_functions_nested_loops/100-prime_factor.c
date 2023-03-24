#include <stdio.h>

/**
 * main - Prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0.
 */

int main(void)
{
	long int a, fac;

	a = 612852475143;
	for (fac = 2; fac <= a; fac++)
	{
		if (a % fac == 0)
		{
			a /= fac;
			fac--;
		}
	}
	printf("%ld\n", fac);
	return (0);
}
