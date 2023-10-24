#include "lists.h"

/**
 * sum_listint - sums up all the information in a listint_t list.
 * @head: initial node of a linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
