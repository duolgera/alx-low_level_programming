#include "main.h"

/**
 * print_line -draws a straight lin
 * @n:No of times
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
