#include "main.h"

/**
 * _strlen_recursion - prints the length of string
 * @s: the string to be printed
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

/**
 * pal_checker - check if s is palindrome.
 *
 * @s: string base adress
 *
 * @i: left index
 * @j: right index
 * Return: 1 if s is palindrome, 0 if something else.
 */
int pal_checker(char *s, int i, int j)
{
	if (s[i] == s[j])
		if (i > j / 2)
			return (1);
		else
			return (pal_checker(s, i + 1, j - 1));
	else
		return (0);
}
/**
 * is_palindrome - check if s is palindrome
 * @s: base adress for string.
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_palindrome(char *s)
{
	return (pal_checker(s, 0, _strlen_recursion(s) - 1));
}
