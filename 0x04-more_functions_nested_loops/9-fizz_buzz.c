#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers 1 through 100, then a new line.
 * but print Fizz instead of the number for multiples of three.
 * and for the multiples of five prints buzz.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
	if (i % 3 == 0 && i % 5 != 0)
	{
	printf(" Fizz");
	}
	else if (i % 5 == 0 && i % 3 != 0)
	{
	printf(" Buzz");
	}
	else if (i % 3 == 0 && i % 5 == 0)
	{
	printf(" FizzBuzz");
	}
	else if (i == 1)
	{
	printf("%d", i);
	}
	else
	{
	printf(" %d", i);
	}
	}
	printf("\n");

	return (0);
}
