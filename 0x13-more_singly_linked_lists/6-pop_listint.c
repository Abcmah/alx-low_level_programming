#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: head
 * Return: NULL 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int res;

	if (*head == NULL)
		return (0);

	temp = *head;
	res = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (res);
}
