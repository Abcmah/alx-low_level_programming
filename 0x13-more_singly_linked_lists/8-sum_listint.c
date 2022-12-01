#include "lists.h"

/**
 * sum_listint - Calculates the sum
 * @head: A pointer to the head of the listint_t list.
 * Return: the sum(success)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
