#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers -  returns numbers \n
 * @n: number of parameter
 * @separator: separator between two numbers
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list argp;

	va_start(argp, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(argp, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(argp);
}
