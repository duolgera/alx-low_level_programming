#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix;
 * @a: pointer to the square matrix
 * @size: size of the square matrix
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum += *(a + i * size + i);
		sum2 += *(a + i * size + (size - 1 - i));
	}
	_putchar('[');
	print_number(sum1);
	_putchar(',');
	_putchar(' ');
	print_number(sum2);
	_putchar(']');
	_putchar('\n');
}
