#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at given index
 * @head: double pointer to the head of the list
 * @index: index of the node to delete
 *
 * Return: 1 if success, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int position;
	listint_t *current_node, *next_node;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
		return (1);
	}
	current_node = *head;
	for (position = 0; position < index - 1; position++)
	{
		if (current_node->next == NULL)
			return (-1);
		current_node = current_node->next;
	}
	next_node = current_node->next;
	current_node->next = next_node->next;
	free(next_node);
	return (1);
}
