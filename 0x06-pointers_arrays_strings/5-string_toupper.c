#include "main.h"

/**
 * string_toupper - changes all lowercae letters of a string to uppercase
 *@str: pointer to the string
 *Return: Pointer to the modified string (same as input string)
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
