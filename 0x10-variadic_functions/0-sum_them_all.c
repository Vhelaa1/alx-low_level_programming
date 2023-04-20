#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - adds a set of numbers
 * @n: the number of parameters passed
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list argp;

	va_start(argp, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(argp, int);

	va_end(argp);

	return (sum);
}
