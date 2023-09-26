#include "main.h"

/**
  * _strpbrk - main function of the prototype
  *
  * @s: function criterion
  *
  * @accept: Function criterion
  *
  * Return: Always 0.
  */

char *_strpbrk(char *s, char *accept)
{
	int w, j;

	for (w = 0; s[w] != '\0'; w++)
	{
	for (j = 0; accept[j] != '\0'; j++)
	{
	if (s[w] == accept[j])
	return (s + w);
	}
	}
	return (0);
}
