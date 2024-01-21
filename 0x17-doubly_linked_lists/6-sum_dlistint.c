#include "lists.h"

/**
 * sum_dlistint - sum all elemnts of the linked list
 *
 * @head: the paramiter
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head->prev != NULL)
	{
		head = head->prev;
	}

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
