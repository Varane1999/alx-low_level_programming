#include "main.h"

/**
 * _isalpha - Checks for alphabets
 * @c: Function parameter
 * Return: Always 1 and 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'a' && c <= 'Z'))
		return (1);
	else
		return (0);
}
