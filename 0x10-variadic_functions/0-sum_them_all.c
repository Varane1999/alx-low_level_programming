#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - brings back the total of all its parameters.
 * @n: how many parameters were supplied to the function.
 * @...: a configurable amount of input parameters for the total.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
