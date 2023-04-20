#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - returns all of the specified arguments
 * @format: specifies the necessary operations
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i;
	int fl;
	char *str;
	va_list a_list;

	va_start(a_list, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(a_list, int));
				fl = 0;
				break;
			case 'i':
				printf("%i", va_arg(a_list, int));
				fl = 0;
				break;
			case 'f':
				printf("%f", va_arg(a_list, double));
				fl = 0;
				break;
			case 's':
				str = va_arg(a_list, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				fl = 0;
				break;
			default:
				fl = 1;
				break;
		}
		if (format[i + 1] != '\0' && fl == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(a_list);
}
