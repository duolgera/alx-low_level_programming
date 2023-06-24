#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers -prints the numers from 0 to 9, excluding 2 and 4
 * Return: Always 0 (succses)
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 &&  i != 4)
		{
			putchar(i + '0');
		}
		putchar('\n');
	}
}