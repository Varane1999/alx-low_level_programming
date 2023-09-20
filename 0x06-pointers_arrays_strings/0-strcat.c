#include "main.h"

/**
  *_strcat - main function of the prototype
  * @src: Concatenation parameter
  * @dest: Concatenation parameter
  * Return: dest
  */

char *_strcat(char *dest, char *src)
{
int w, i;

w = 0;
i = 0;

while (dest[w] != '\0')
{
	w++;
}

while (src[i] != '\0')
{
	dest[w] = src[i];
	w++;
	i++;
}
dest[w] = '\0';
return (dest);
}
