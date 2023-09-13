#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0
 */
int main(void)
{
	long int i, w, q, next;

	w = 1;

	q = 2;

	for (i = 1; i <= 50; ++i)
	{
		if (w != 20365011074)
		{
			printf("%ld, ", w);
		} else
		{
			printf("%ld\n", w);
		}
		next = w + q;
		w = q;
		q = next;
	}

	return (0);
}
