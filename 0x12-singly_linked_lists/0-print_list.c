#include "lists.h"
/**
 * print_list - prints the member
 * @h: node
 * Return: size of list
 */
size_t print_list(const list_t *h)
{
	int size = 0;
	int len = 0;

	while (h != NULL)
	{
		len = (h->str == NULL ? 0 : h->len)

		printf("[%d] %s\n", len, (h->str != NULL ? h->str : "(nil)"));
		h = h->next;
		size++;
	}
	return (size);
}
