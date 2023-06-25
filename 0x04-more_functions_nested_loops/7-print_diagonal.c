#include "main.h"
/**
 * print_diagonal -Print diagonal lines
 * @n: input varibable
 * Return:Void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		putchar('$');
		putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			putchar(' ');
		}
	}
	putchar('\\');
	putchar('$');
	putchar('\n');
}