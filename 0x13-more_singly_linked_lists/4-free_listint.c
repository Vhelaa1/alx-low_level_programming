#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a linked list of type listint_t.
 *
 * @head: Pointer to the head node of the linked list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current_node;

	while (head != NULL)
	{
		current_node = head->next;
		free(head);
		head = current_node;
	}
}
