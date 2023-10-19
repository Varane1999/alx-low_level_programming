#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
* list_len - check the code for students.
* @h: name of the list
* Return: the number of nodes.
*/
size_t list_len(const list_t *h)
{
	int w = 0;

	while (h)
	{
	w++;
	h = h->next;
	}
	return (w);
}
