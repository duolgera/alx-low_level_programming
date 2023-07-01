#include "main.h"

/**
 * print_number - print an integer
 * @n: the intger to be printed
 */
void print_number(int n)
{
	int divisor = 1;
	int digit;
	
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (n / divisor >= 10)
		divisor *= 10;
	while (divisor > 0)
	{
		digit = (n / divisor) % 10;
		_putchar('0' + digit);
		divisor /= 10;
	}
	if (n == 0)
		_putchar('0');
}
