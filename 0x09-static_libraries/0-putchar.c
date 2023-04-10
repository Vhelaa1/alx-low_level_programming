#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the charachter to print
 * Return: on succes, 1
 * On error: -1 is returned, and erno is setappropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
