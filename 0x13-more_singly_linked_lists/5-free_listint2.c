#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a linked list of type listint_t and sets head to NULL.
 *
 * @head: Double pointer to the head node of the linked list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		current_node = (*head)->next;
		free(*head);
		*head = current_node;
	}
}
