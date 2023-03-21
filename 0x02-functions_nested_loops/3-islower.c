#include "main.h"

/**
 * _islower - Entry point
 * @c: is the char lowercase
 * Return: 1 char  is lowercase,0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
