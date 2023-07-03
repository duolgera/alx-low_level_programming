#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: pointer to the string to be  searched
 * @accept: pointer to the string containing the bytes to match
 *
 * Return:Null if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (NULL);
}
