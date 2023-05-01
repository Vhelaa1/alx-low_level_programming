#include "lists.h"

/**
 * listint_len - Returns the number of nodes in a linked listint_t list.
 *
 * @h: Pointer to the head node of the linked list
 *
 * Return: The number of nodes in the list
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
	h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}
