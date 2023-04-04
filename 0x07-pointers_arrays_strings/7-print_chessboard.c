#include "main.h"

/**
 * print_chessboard - prints the chessboard
 *
 * @a: pointer to pieces to print
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int n;
	int m;

	for (n = 0; n <= 7; n++)
	{
		for (m = 0; m < 7; m++)
		{
			_putchar(a[n][m]);
		}
		_putchar('\n');
	}
}
