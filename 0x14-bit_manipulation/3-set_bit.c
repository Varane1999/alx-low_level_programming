#include "main.h"

/**
 * set_bit - Prog sets a bit's value to 1 at a specified index.
 * @n: number to set
 * @index: index where the bit is set
 *
 * Return: 1 if success, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setbit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	setbit = 1 << index;
	*n = *n | setbit;
	return (1);
}
