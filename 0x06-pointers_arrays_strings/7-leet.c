#include "main.h"
#include <stdio.h>
/**
  *leet - origin function
  * @n: Function parameter
  *Return: value of n
 */

char *leet(char *n)
{
	int w, i;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (w = 0; n[w] != '\0'; w++)
	{
	for (i = 0; i < 10; i++)
	{
	if (n[w] == s1[i])
	{
	n[i] = s2[i];
	}
	}
	}
	return (n);
}
