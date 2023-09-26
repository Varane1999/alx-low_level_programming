#include "main.h"

/**
  * _memcpy - main function prototype
  *
  * @src: Source criterion
  *
  * @dest: destination criterion
  *
  * @n: Function criterion
  *
  * Return: Copied memory
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int w;

	for (w = 0; w < n; w++)
	{
	dest[w] = src[w];
	}
	return (dest);
}
