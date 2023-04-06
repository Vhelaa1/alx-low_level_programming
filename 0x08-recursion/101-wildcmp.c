#include "main.h"

/**
 * str_checker - checks if two strings are identical
 * @s1: strings_1 base adress
 *
 * @s2: string_2 base adress
 * @l: left index
 * @r: special index like joker
 * Return: 1 if s is palindrome, 0 is smtg else
 */
int str_checker(char *s1, char *s2, int l, int r)
{
	if (s1[l] == '\0' && s2[r] == '\0')
		return (1);
	else if (s1[l] == s2[r])
		return (str_checker(s1, s2, l + 1, r + 1));
	else if (s1[l] == '\0' && s2[r] == '*')
		return (str_checker(s1, s2, l, r + 1));
	else if (s2[r] == '*')
		return (str_checker(s1, s2, l + 1, r) || str_checker(s1, s2, l, r + 1));
	return (0);
}
/**
 * wildcmp - checks if strings could be considered identical
 * @s1: base adress for string
 * @s2: base adress for string
 * Return: 1 if are considered identical
 */
int wildcmp(char *s1, char *s2)
{
	return (str_checker(s1, s2, 0, 0));
}
