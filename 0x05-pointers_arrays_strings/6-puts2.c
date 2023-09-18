#include "main.h"
/**
 * puts2 - function should only output one of two characters
 * beginning with the first.
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int w = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		w++;
	}
	t = w - 1;
	for (o = 0 ; o <= t ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
