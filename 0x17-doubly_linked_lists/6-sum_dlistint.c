#include "lists.h"

/**
 * sum_dlistint - sum of all data in linked list
 * of a doubly linked list
 *
 * @head: head of the list
 * Return: sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int wsum;

	wsum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			wsum += head->n;
			head = head->next;
		}
	}

	return (wsum);
}
