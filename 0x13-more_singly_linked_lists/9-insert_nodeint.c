#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node to a listint_t
 * @head: head
 * @idx: The index
 * @n: position
 * Return: NOde(success)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *copy = *head;
	unsigned int node;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;

	if (idx == 0)
	{
		temp->next = copy;
		*head = temp;
		return (temp);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);

		copy = copy->next;
	}

	temp->next = copy->next;
	copy->next = temp;

	return (temp);
}
