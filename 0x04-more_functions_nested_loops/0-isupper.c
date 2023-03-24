#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: variable uppercase
 * Return: 1 if c is uppercase ,0 is otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
