#include <stdio.h>

/**
 * Main - in values below 1024, functions to add multiples of three or five
 * Return: 0
 */

int main(void)

{
	int sum = 0;
	int w;

	for (w = 0; w < 1024; w++)
	{
		if (w % 3 == 0 || w % 5 == 0)
			sum = sum + w;
	}

	printf("%d\n", sum);
	return (0);
}
