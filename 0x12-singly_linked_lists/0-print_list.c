#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
* print_list - For Holberton School pupils, check the code.
* @h: name of the list
* Return: the number of nodes.
*/
size_t print_list(const list_t *h)
{
	int w;

	if (h == NULL)
		return (0);

	for (w = 1; h->next != NULL; w++)
	{
		if (h->str == NULL)
			printf("[%lu] %s\n", h->len, "(nil)");
		else
			printf("[%lu] %s\n", h->len, h->str);
		h = h->next;
	}
	printf("[%lu] %s\n", h->len, h->str);
	return (w);
}
