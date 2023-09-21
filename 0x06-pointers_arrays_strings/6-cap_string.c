#include "main.h"

/**
  * cap_string - The main  function
  *
  * @str: Function parameter of the string
  *
  * Return: Void.
  */
char *cap_string(char *str)
{
	int w = 0;

	while (str[w])
	{
	while (!(str[w] >= 'a' && str[w] <= 'z'))
		w++;
	if (str[w - 1] == ' ' ||
	str[w - 1] == '\t' ||
	str[w - 1] == '\n' ||
	str[w - 1] == ',' ||
	str[w - 1] == ';' ||
	str[w - 1] == '.' ||
	str[w - 1] == '!' ||
	str[w - 1] == '?' ||
	str[w - 1] == '"' ||
	str[w - 1] == '(' ||
	str[w - 1] == ')' ||
	str[w - 1] == '{' ||
	str[w - 1] == '}' ||
	w == 0)
	str[w] -= 32;
	w++;
	}
	return (str);
}

