#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - length of a string
 * @str: string to find the length of
 *
 * Return: length of string
 */
unsigned int _strlen(char const *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * add_node_end - adds a new node at the end
 * @head: double pointer to a linked list
 * @str: string to add to the rec node
 *
 * Return: pointer to the rec node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *rec, *tm;

	if (str == NULL)
		return (NULL);
	rec = malloc(sizeof(list_t));
	if (rec == NULL)
		return (NULL);
	rec->str = strdup(str);
	if (rec->str == NULL)
	{
		free(rec);
		return (NULL);
	}
	rec->len = _strlen(str);
	rec->next = NULL;
	if (*head == NULL)
	{
		*head = rec;
		return (rec);
	}
	tm = *head;
	while (tm->next)
		tm = tm->next;
	tm->next = rec;
	return (rec);
}
