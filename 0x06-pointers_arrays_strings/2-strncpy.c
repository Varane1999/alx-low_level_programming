#include "main.h"

/**
  * _strncpy - The main origin of the code
  * @src: Function parameter
  * @dest: Function parameter
  * @n: Function parameter
  * Return: dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int w = 0;

	while (w < n && src[w] != '\0')
	{
	dest[w] = src[w];
	w++;
	}
	while  (w < n)
	{
	dest[w] = '\0';
	w++;
	}
	return (dest);
}
