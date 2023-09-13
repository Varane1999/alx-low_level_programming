#include <stdio.h>

/**
 * main - finds and prints the number of the even valued terms
 * followed a new line
 * Return: Always 0
 */
int main(void)
{
	int i;
	unsigned long int w, k, next, sum;

	w = 1;
	k = 2;
	sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (w < 4000000 && (w % 2) == 0)
		{
			sum = sum + w;
		}
		next = w + k;
		w = k;
		k = next;
	}

	printf("%lu\n", sum);

	return (0);
}

