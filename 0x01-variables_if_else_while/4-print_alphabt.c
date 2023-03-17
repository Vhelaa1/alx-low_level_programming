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
		if (alphab != 'q' && alphab != 'e')
		{
			putchar(alphab);
		}
	}
	putchar('\n');
	return (0);
}
