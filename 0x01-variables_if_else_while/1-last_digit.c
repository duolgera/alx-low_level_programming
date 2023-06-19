#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entery point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, m;

	srand(time(NULL));
	n = rand()% 201 - 100;
	m = n % 10;

	printf("Last digit of %d is", m);
	if (m < 5)
		printf("greater than 5\n");
	else if (m == 0)
		printf("0\n");
	else
		printf("and is less than 6 and not 0\n");
	return (0);
}
