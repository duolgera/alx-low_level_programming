#include "stdio.h"

/**
 * main -program that prints lower and upercase
 * Return: 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);

	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	return (0);
}
