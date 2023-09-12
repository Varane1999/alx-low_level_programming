#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet in lowcases x10
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char w;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (w = 'a'; w <= 'z'; w++)
			_putchar(w);
	}
	_putchar('\n');
}
