#include "lists.h"

/**
 * dlistint_len - yields the quantity of components in
 * a double linked list
 * @h: head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int wcount;

	wcount = 0;

	if (h == NULL)
		return (wcount);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		wcount++;
		h = h->next;
	}

	return (wcount);
}
