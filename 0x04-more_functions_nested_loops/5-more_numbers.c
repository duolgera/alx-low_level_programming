#include "main.h"

/**
 * more_numbers -print numbers 10 times from 0-14
 *
 * Rreturn: Always 0 (Succes)
 */

void more_numbers(void)
{
	int i, j;

	for  (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 9)
			_putchar('0' + (j / 10));
			_putchar('0' + (j % 10));
		}
		if (i != 9)
		{
			_putchar('1');
			_putchar('0');
		}
		_putchar('\n');
	}
}
