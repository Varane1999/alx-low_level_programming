#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
		char w;

		w = 'a';
		while
			(w <= 'z') {
				if ((w != 'q' && w != 'e') && w <= 'z')
					putchar(w);
				w++;
			}
		putchar('\n');
		return (0);
}
