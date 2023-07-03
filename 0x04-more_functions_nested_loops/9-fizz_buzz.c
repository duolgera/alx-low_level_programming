#include <stdio.h>

/**
 * Main -Fizz-Buzz test
 *@n: number of intigers from 1 upto 100
 * Return: Always 0 (Success)
 */

int main(void)
{
	int (n);

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FIZZBUZZ");
		}
		else if (n % 3 == 0)
		{
			printf("FIZZ");
		}
		else if (n % 5 == 0)
		{
			printf("BUZZ");
		}
	}

	else
	{
		printf("%d", n);
	}
}
