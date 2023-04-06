#include "main.h"

/**
 * check - checks to see if the number is prime
 * @x: int
 * @y: int
 * Return: int
 */
int check(int x, int y)
{
	if (y < 2 || y % x == 0)
		return (0);
	else if (x > y / 2)
		return (1);
	else
		return (check(x + 1, y));
}
/**
 * is_prime_number - states if the number is prime
 *
 * @n: int
 *
 * Return: int
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));
}
