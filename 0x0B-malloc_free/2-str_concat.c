#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - 2 strings concatenated
 *
 * @s1: input string 1
 * @s2: input sring 2
 *
 * Return: return a string
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int len1 = 0;
	int len2 = 0;
	char *tmp1 = s1, *tmp2 = s2;
	char *str_concatenate;

	if (s1 != NULL)
	{
		while (*tmp1 != '\0')
		{
			len1++;
			tmp1++;
		}
	}
	if (s2 != NULL)
	{
		while (*tmp2 != '\0')
		{
			len2++;
			tmp2++;
		}
	}
	str_concatenate = malloc((len1 + len2 + 1) * sizeof(char));
	if (str_concatenate == NULL)
		return (NULL);

	for (i = 0; i < len1 + len2; i++)
	{
		if (i < len1)
		{
			str_concatenate[i] = (s1 == NULL) ? '\0' : s1[i];
		}
		else if (s2 != NULL)
		{
			str_concatenate[i] = s2[i - len1];
		}
	}
	str_concatenate[len1 + len2] = '\0';
	return (str_concatenate);
}
