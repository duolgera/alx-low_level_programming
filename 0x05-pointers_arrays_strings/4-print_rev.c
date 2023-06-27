#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - function prints string in reverse followed by a new line
 * @s: a string that reference pointer
 * Return: Always 0 Success
 */

void print_rev(char *s)
{
	int start = 0;

	while (s[start])
		start++;
	while (start--)
		_putchar(s[start]);
	_putchar('\n');
}
