#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */

int _strlen(const char *s)
{
	int w = 0;


	while (s[w] != '\0')
	{
		w++;
	}
	return (w);
}
