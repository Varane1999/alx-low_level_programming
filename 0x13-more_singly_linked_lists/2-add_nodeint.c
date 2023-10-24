#include "lists.h"

/**
 * add_nodeint - creates a new node at the start of a linked list.
 * @head: reference to the list's root node
 * @n: information to add to that new node
 *
 * Return: the new node's reference, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
