#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - returns strings passed to the funct separed by separators
 * @separator: A string that seperates strings
 * @n: number of unnamed parameters
 * Return: 0
 */

#include <stdio.h>
#include <stdarg.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
char *str;

va_start(args, n);

for (i = 0; i < n; i++)
{
str = va_arg(args, char *);

if (str == NULL)
printf("(nil)");
else
printf("%s", str);

if (separator != NULL && i < n - 1)
printf("%s", separator);
}

printf("\n");
va_end(args);
}
