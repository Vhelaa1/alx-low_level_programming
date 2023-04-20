#include "variadic_functions.h"

/**
 * print_sings - returns strings passed to the funct separed by separators
 * @separator: A string that seperates strings
 * @n: number of unnamed parameters
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *s;
	unsigned int i;
	va_list argp;

	va_start(argp, n);
	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		s = va_arg(argp, char*);
		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(argp);
}
