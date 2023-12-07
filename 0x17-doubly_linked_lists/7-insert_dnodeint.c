#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at
 * a given position
 *@h: header
 *@idx: index to insert to
 * @n: data to add
 * Return: the node added
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *fast = *h, *slow = NULL;
	unsigned int counter;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;

	if (!(*h))
	{
		(*h) = new;
		new->prev = NULL;
		new->next = NULL;
	}
	else
	{
		for (counter = 0; counter < idx && fast != NULL; counter++)
		{
			slow = fast;
			fast = fast->next;
		}
		if (idx > counter + 1)
			return (NULL);

		new->prev = slow;
		if (slow)
			slow->next = new;
		new->next = fast;
		if (fast)
			fast->prev = new;
		if (idx == 0)
			*h = new;
	}
	return (new);
}
