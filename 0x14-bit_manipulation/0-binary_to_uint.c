#include "main.h"

/**
 * binary_to_uint - a binary number to an unsigned int using this function.
 * @b: reference to a string that has a binary number in it
 *
 * Return: unsigned int containing the binary integer in decimal notation;
 * 0 if an error occurred
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int num;

	num = 0;
	if (!b)
		return (0);
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
	}
	for (a = 0; b[a] != '\0'; a++)
	{
		num <<= 1;
		if (b[a] == '1')
			num += 1;
	}
	return (num);
}
