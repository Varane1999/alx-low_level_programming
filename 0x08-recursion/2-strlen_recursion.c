#include "main.h"
/**
 * _strlen_recursion - gives back a string's length.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int w = 0;

	if (*s)
	{
		w++;
		w += _strlen_recursion(s + 1);
	}

	return (w);
}
