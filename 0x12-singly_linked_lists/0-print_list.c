#include "lists.h"

size_t print_list(const list_t *h)
{
	int size = 0;

	while (h != NULL)
	{
		printf("[%d] %s\n",(h->str == NULL ? 0 : h->len),(h->str != NULL ? h->str : "(nil)"));
		h = h->next;
		size ++;
	}
	return (size);
}
