#include "lists.h"

/**
 * add_dnodeint - adds a fresh node at the starting
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *wnew;
	dlistint_t *w;

	wnew = malloc(sizeof(dlistint_t));
	if (wnew == NULL)
		return (NULL);

	wnew->n = n;
	wnew->prev = NULL;
	w = *head;

	if (w != NULL)
	{
		while (w->prev != NULL)
			w = w->prev;
	}

	wnew->next = w;

	if (w != NULL)
		w->prev = wnew;

	*head = wnew;

	return (wnew);
}
