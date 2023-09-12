#include "main.h"

/**
 * jack_bauer - prints every minutes in twenty-four hours.
 * Return: void.
 */

void jack_bauer(void)
{
	int i, w;

	for (i = 0; i < 24; i++)
	{
		for (w = 0; w < 60; w++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(w / 10 + '0');
			_putchar(w % 10 + '0');
			_putchar('\n');
		}
	}
}
