#include "lists.h"

/**
 * *add_dnodeint - description
 * @head: param
 * @n: param
 * Return: the list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *aux;

	new = malloc(sizeof(dlistint_t));
	
	if (new == NULL)
	{
		return (NULL);
	}

	aux = *head;

	if (aux != NULL)
	{
		while (aux->prev != NULL)
		{
			aux = aux->prev;
		}
	}

	new->prev = NULL;
	new->n = n;
	new->next = aux;
	
	if (aux != NULL)
		aux->prev = new;

	*head = new;

	return (new);
}
