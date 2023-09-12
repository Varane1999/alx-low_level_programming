#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @w: Parameter to be checked.
 * Return: k
 */

int print_last_digit(int w)

{
	int k;

	k = w % 10;
	if (w < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}
