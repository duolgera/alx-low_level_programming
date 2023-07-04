#include "main.h"
#include <unistd.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: pointer to the square matrix
 * @size: size of the square matrix
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;
	char buffer[20];
	int length;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + (size - 1 - i));
	}
	length = 0;
	while (sum1 > 0)
	{
		buffer[length++] = '0' + (sum1 % 10);
		sum1 /= 10;
	}
	buffer[length++] = ',';
	while (sum2 > 0)
	{
		buffer[length++] = '0' + (sum2 % 10);
		sum2 /=10;
	}
	buffer[length++] = '\n';

	write(1, buffer, length);
}
