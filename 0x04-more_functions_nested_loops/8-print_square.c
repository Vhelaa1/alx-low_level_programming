#include "main.h"

/**
 * print_square - prints a square
 *@size:  is the size of the square
 * Return: no return
 */
void print_square(int size)
{
	int a;
	int b;

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar('#');
		}
		if (a != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}

