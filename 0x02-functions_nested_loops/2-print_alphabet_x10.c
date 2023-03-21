#include "main.h"

/**
 * print_alphabet_x10 - Entry all alphabet
 */

void print_alphabet_x10(void)
{
	char alphabet_x10;
	int count;

	for (count = 48; count <= 57; count++)
	{
		for (alphabet_x10 = 'a'; alphabet_x10 <= 'z'; alphabet_x10++)
		{
			_putchar(alphabet_x10);
		}
		_putchar('\n');
	}
}
