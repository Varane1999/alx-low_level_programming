#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @w: Parameter to be checked.
 * Return: Value of the last digit of number.
 */

int print_last_digit(int w)

{
	int last;

	last = w % 10;
	if (last < 10)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
