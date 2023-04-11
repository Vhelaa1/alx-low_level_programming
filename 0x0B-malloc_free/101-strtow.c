#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int words_count(char *str);

/**
 * strtow - splits a string into words.
 *
 * @str: input string
 *
 * Return: Array of strings
 */
char **strtow(char *str)
{
	int count;
	int i = 0;
	int array_index = 0;
	int start;
	int end;
	int length;
	char *current_word;
	char **split_words;

	if (str == NULL || strlen(str) == 0 || words_count(str) == 0)
		return (NULL);
	count = words_count(str);
	split_words = malloc(sizeof(char *) * (count + 1));

	if (split_words == NULL)
		return (NULL);

	while (str[i] != '\0' && array_index < count)
	{
		start = i;
		while (str[i] != ' ' && str[i] != '\0')
			i++;
		end = i;
		length = end - start;
		if (length > 0)
		{
			current_word = malloc(sizeof(char) * (length + 1));
			if (current_word == NULL)
				return (NULL);
			strncpy(current_word, str + start, length);
			current_word[length] = '\0';
			split_words[array_index] = current_word;
			array_index++;
		}

		else
			i++;
	}
	split_words[array_index] = NULL;
	return (split_words);
}

/**
 * words_count - counts the number of words in a string
 *
 * @str: input string
 *
 * Return: returns the count as an int
 */
int words_count(char *str)
{
	int count = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			count++;
			while (str[i] != ' ' && str[i] != '\0')
				i++;
		}
		else
			i++;
	}
	if (count == 0 && strlen(str) == 1 && str[0] == ' ')
		count = 0;

	return (count);
}
