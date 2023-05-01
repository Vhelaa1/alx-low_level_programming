#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a linked list of type listint_t
 *
 * @head: Double pointer to the head node of the linked list
 *
 * Return: The integer value of the deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *current_node;
	int node_value;

	if (head == NULL || *head == NULL)
		return (0);
	current_node = *head;
	*head = current_node->next;
	node_value = current_node->n;
	free(current_node);
	return (node_value);
}
