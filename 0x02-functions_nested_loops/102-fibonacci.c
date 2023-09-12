#include <stdio.h>

/**
 * main - program to find first 50 fibobacci number.
 * Return: Always 0
 */

int main(void)
{
	int w = 1;
	int q = 2;
	int n;
	int i;

	printf("%d, ", w);
	for (i = 1; i < 50; i++)
	{
		printf("%d", q);
		n = w + q;
		w = q;
		q = n;
	}
	printf("\n");
	return (0);
}
