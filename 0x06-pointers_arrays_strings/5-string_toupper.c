#include "main.h"
/**
 * string_toupper - origin function
 * @n: String input
 * Return: dest
 */

char *string_toupper(char *n)
{
	int w;

	w = 0;
	while (n[w] != '\0')
	{
	if (n[w] >= 'a' && n[w] <= 'z')
	n[w] = n[w] - 32;
	w++;
	}
return (n);
}
