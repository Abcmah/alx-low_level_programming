#include "lists.h"

/**
 *listint_len - Returns the number of member in the list
 *@h: A pointer to the head
 *
 * Return: The number of nodes in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t size = 0;

	while (h)
	{
		size++;
		h = h->next;
	}

	return (size);
}
