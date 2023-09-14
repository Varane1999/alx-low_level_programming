#include "main.h"

/**
 * print_diagonal - creates a diagonal line on the terminal
 * @n: number of times to print the character \
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, w;

		for (i = 0; i < n; i++)
	{
			for (w = 0; w < n; w++)
		{
			if (w == i)
			_putchar('\\');
			else if (w < i)
			_putchar(' ');
		}
		_putchar('\n');
	}
	}
}
