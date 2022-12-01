#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning
 * @head: A pointer to the head
 * @n: The value
 *Return: If the - NULL or a node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tempo;

	tempo = malloc(sizeof(listint_t));
	if (tempo == NULL)
		return (NULL);

	tempo->n = n;
	tempo->next = *head;

	*head = tempo;

	return (tempo);
}
