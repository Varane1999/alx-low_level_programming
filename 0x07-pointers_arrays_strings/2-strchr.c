#include "main.h"

/**
  * _strchr - main function
  *
  * @s: Function criterion
  *
  * @c: Function criterion
  *
  * Return: Always o.
  */
char *_strchr(char *s, char c)
{
	int w;

	for (w = 0; s[w] >= '\0'; w++)
	{
	if (s[w] == c)
	return (s + w);
	}
	return (0);
}
