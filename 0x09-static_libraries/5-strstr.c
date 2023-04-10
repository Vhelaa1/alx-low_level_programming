#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystrack: the longer string to search
 *
 * @needle: the first occurence of the substring
 *
 * Return: a pointer beg of substring or @NULL if its not found
 */
char *_strstr(char *haystrack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystrack[i])
	{
		while (needle[j] && (haystrack[i] == needle[0]))
		{
			if (haystrack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystrack + i);
	}
	return (0);
}
