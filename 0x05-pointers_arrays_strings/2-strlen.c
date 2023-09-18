#include "main.h"
/**
 * _strlen - returns a string's length.
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int w = 0;

	while (*s != '\0')
	{
		w++;
		s++;
	}

	return (w);
}
