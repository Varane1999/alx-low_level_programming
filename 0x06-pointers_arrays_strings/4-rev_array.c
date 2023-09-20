#include "main.h"

/**
  * reverse_array - The origin faunction
  * @a: Function parameter
  * @n: Function parameter
  * Return: Always 0
  */
void reverse_array(int *a, int n)
{
	int w, r;

	for (w = 0; w < n--; w++)
	{
	r = a[w];
	a[w] = a[n];
	a[n] = r;
	}
}
