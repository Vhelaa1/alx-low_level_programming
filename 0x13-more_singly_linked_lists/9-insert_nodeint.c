#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to the head of the list
 * @idx: index of the node
 * @n: value to be inserted in the new node
 *
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int index;
	listint_t *current_node, *new_node;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		current_node = *head;
		for (index = 0; index < idx - 1 && current_node != NULL; index++)
		{
			current_node = current_node->next;
		}
		if (current_node == NULL)
			return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	new_node->next = current_node->next;
	current_node->next = new_node;
	return (new_node);
}
