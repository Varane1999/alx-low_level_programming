#include "main.h"
#include <stdio.h>

/**
 * rot13 - origin function
 * @s: pointer to string parameter
 * Return: *s
 */

char *rot13(char *s)
{
	int w;
	int j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (w = 0; s[w] != '\0'; w++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[w] == data1[j])
			{
				s[w] = datarot[j];
				break;
			}
		}
	}
	return (s);
}
