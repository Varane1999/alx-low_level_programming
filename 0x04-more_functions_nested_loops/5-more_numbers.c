#include "main.h"

/**
 * more_numbers - print excess numbers
 */

void more_numbers(void)
{
	int i, w;

	for (i = 1; i <= 10; i++)
	{
	for (w = 0; w <= 14; w++)
	{
	if (w >= 10)
	_putchar('1');
	_putchar (w % 10 + '0');
	}
	_putchar('\n');
	}
}

