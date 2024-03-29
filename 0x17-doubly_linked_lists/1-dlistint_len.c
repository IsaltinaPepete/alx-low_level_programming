#include "lists.h"

/**
 * dlistint_len - return len of list
 * @h: param
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		return (count);
	}

	while (h->prev != NULL)
	{
		h = h->prev;
	}

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
