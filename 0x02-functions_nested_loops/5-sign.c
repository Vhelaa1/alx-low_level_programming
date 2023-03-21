#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: put the number
 * Return: 1  n is greater than zero , 0 if n is zero and -1  is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
