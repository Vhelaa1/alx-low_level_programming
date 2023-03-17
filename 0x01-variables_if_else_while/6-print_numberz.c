#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the numbers 0 to 9, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numb;

	for (numb = 0; numb <= 9; numb++)
	{
		putchar(numb + '0');
	}
	putchar('\n');
	return (0);
}
