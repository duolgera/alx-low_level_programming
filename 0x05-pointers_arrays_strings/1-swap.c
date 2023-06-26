#include "main.h"
#include <stdio.h>

/**
 * swap_int(int *a, int *b)- swaps the values of two integers
 * @a:swap number and store adress of b
 * @b:swap number and store adress of a
 * Return: Always 0  Success
 */

void swap_int(int *a, int *b)
{
	int change;

	change = *b;
	*b = *a;
	*a = change;
}
