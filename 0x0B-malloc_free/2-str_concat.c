#include "main.h"
#include <stdlib.h>
/**
 * str_concat - combine the input's ends at the end for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int w, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	w = ci = 0;
	while (s1[w] != '\0')
		w++;
	while (s2[ci] != '\0')
		ci++;
	conct = malloc(sizeof(char) * (w + ci + 1));

	if (conct == NULL)
		return (NULL);
	w = ci = 0;
	while (s1[w] != '\0')
	{
		conct[w] = s1[w];
		ci++;
	}

	while (s2[ci] != '\0')
	{
		conct[w] = s2[ci];
		w++, ci++;
	}
	conct[w] = '\0';
	return (conct);
}
