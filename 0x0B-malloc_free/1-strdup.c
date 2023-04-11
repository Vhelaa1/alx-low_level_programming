#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - create a new duplicate string
 *
 * @str: input string to duplicate
 *
 * Return: return string new_str
 */
char *_strdup(char *str)
{
	char *new_str;
	int i, len = strlen(str);

	if (str == NULL)
		return (NULL);

	new_str = malloc((len + 1) * sizeof(char));

	if (new_str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		new_str[i] = str[i];
	}
	new_str[len] = '\0';
	return (new_str);
}
