#include "lists.h"

/**
 * *add_dnodeint_end - function
 * @head: param
 * @n: param
 * Return: enderenco do novo elemento
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *aux;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
        new->next = NULL;
	aux = *head;

	if (aux != NULL)
	{
		while (aux->next != NULL)
		{
			aux = aux->next;
		}
		aux->next = new;
	} else
	{
		*head = new;
	}

	new->prev = aux;

	return (new);
}
