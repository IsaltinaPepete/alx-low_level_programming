#include "lists.h"

/**
 * print_dlistint - print elements of a list
 * @h: var
 * Return: cont
 */
size_t print_dlistint(const dlistint_t *h)
{
	int cont = 0;

	if (h == NULL)
	{
		return (cont);
	}

	if (h->prev != NULL)
	{
		h = h->prev;
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);
		cont++;
		h = h->next;
	}

	return (cont);
}
