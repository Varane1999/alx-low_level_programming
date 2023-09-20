#include "main.h"

/**
  * _strncat  - the origin function
  * @n: Function parameter
  * @src: Function parameter
  * @dest: Function parammeter
  * Return: dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int w, i;

	w = 0;
	i = 0;

	while (dest[w] != '\0')
	{
	w++;
	}
	while (i < n && src[i] != '\0')
	{
	dest[w] = src[i];
	w++;
	i++;
	}
	dest[w] = '\0';
	return (dest);
}
