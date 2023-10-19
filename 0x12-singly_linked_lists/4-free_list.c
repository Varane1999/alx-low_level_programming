#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
* free_list - Release the list's reserved memory.
*
* @head: a pointer to the list's top node that should be freed
*/
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
		free(head->str);
		free(head);
	}
}
