#include "lists.h"

size_t print_list(const list_t *h)
{
	list_t *tempo;
	tempo = h;
	int size = 0;

	while (tempo != NULL)
	{
		printf("[%d] %s\n",(tempo->str == NULL ? 0 : tempo->len),(tempo->str != NULL ? tempo->str : "(nil)"));
		tempo = tempo->next;
		size ++;
	}
	return (size);
}
