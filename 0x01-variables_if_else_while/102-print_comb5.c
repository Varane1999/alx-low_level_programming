#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int w, j;

	for (w = 0; w < 100; w++)
	{
		for (j = 0; j < 100; j++)
		{
			if (w < j)
			{
				putchar((w / 10) + 48);
				putchar((w % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				if (w != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
