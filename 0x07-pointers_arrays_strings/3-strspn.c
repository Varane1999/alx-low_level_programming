#include "main.h"

/**
  * _strspn - main function
  *
  * @s: Function criterion
  *
  * @accept: Function criterion
  *
  * Return: Always 0.
  */
unsigned int _strspn(char *s, char *accept)
{

	unsigned int _strspn(char *s, char *accept);
	unsigned int i = 0;
	int w;

	while (*s)
	{
	for (w = 0; accept[w]; w++)
	{
	if (*s == accept[w])
	{
	i++;
	break;
	}
	else if (accept[w + 1] == '\0')
	return (i);
	}
	s++;
	}
	return (i);
}
