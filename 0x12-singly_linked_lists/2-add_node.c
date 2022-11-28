#include "lists.h"
/**
 * add_node - add new node to the head
 * @head: head of list
 * @str: text
 * Return: the node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (head != NULL && str != NULL)
	{
		temp = (list_t *)malloc(sizeof(list_t));

		temp->str = strdup(str);
		temp->len = strlen(str);
		temp->next = *head;
		*head = temp;

		return (temp);
	}
	return (0);
}
