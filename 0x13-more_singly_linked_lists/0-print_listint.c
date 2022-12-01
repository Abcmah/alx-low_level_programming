#include "lists.h"
/**
 * print_listint - Prints all the nodes of a list.
 * @h: head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	while (h)
	{
		size++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (size);
}
