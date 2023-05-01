#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the first node
 * @index: index of the node to be returned
 * Return: pointer to the node at the given index, or NULL if not found
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	if (head == NULL)
		return (NULL);
	for (count = 0; count < index; count++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
