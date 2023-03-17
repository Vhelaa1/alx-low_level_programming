#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase, followed by a new line.
 *
 * Return: 0 upon successful completion.
 */
int main(void)
{
	char alphab;

	for (alphab = 'a'; alphab <= 'z'; alphab++)
	{
		putchar(alphab);
	}
	for (alphab = 'A'; alphab <= 'Z'; alphab++)
	{
		putchar(alphab);
	}
	putchar('\n');
	return (0);
}
