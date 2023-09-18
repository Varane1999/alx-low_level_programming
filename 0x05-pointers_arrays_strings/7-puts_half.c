#include "main.h"
/**
 * puts_half - a function that outputs a string's first half
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int a, n, w;

	w = 0;

	for (a = 0; str[a] != '\0'; a++)
		w++;

	n = (w / 2);

	if ((w % 2) == 1)
		n = ((w + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
