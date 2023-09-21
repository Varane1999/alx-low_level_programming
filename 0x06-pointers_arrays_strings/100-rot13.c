#include "main.h"
#include <stdio.h>

/**
 * rot13 - origin function
 *
 * @s: String poiner
 *
 * Return: String function
 */

char *rot13(char *s)
{
	int w, r;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (w = 0; s[w] != '\0'; w++)
	{
	for (r = 0; r < 52; r++)
	{
	if (s[w] == data1[r])
	{
	s[w] = datarot[r];
	break;
	}
	}
	}
	return (s);
}
