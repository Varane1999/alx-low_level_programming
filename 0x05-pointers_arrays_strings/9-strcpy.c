#include "main.h"

/**
 * char *_strcpy - a function that duplicates the string referenced by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int w = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; w < l ; w++)
	{
		dest[w] = src[w];
	}
	dest[l] = '\0';
	return (dest);
}
