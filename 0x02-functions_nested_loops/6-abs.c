#include "main.h"

/**
 * _abs - Computes the abolute value of an integer.
 * @w: The parameter to be checked.
 * Return: Absolute value of number or zero
 */

int _abs(int w)

{
	if (w < 0)
	{
	int abs_val;

	abs_val = w * -1;
	return (abs_val);
	}
	return (w);
}
