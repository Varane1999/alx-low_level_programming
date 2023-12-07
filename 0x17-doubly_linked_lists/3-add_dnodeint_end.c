#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *w;
	dlistint_t *wnew;

	wnew = malloc(sizeof(dlistint_t));
	if (wnew == NULL)
		return (NULL);

	wnew->n = n;
	wnew->next = NULL;

	w = *head;

	if (w != NULL)
	{
		while (w->next != NULL)
			w = w->next;
		w->next = wnew;
	}
	else
	{
		*head = wnew;
	}

	wnew->prev = w;

	return (wnew);
}
