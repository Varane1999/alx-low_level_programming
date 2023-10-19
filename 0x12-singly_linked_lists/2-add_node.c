#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
* _strlen - function that gives the string's length as a result.
* @s : s is a character
* Return: value is w
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

/**
* add_node - start a new node at the list_t list's beginning.
* @head: head of a list_t list.
* @str: value to insert into element.
* Return: the number of nodes.
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;


	add = malloc(sizeof(list_t));
	if (add == NULL)
	return (NULL);
	add->str = strdup(str);


	add->len = _strlen(str);
	add->next = *head;
	*head = add;

	return (add);
}
