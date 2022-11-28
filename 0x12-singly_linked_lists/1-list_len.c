#include "lists.h"
/**
 * list_len - returns the len of a list
 * @h: list
 * Return: list(size)
 */
size_t list_len(const list_t *h)
{
	int size = 0;

	while (h != NULL)
	{
		h = h->next;
		size++;
	}
	return (size);
}
