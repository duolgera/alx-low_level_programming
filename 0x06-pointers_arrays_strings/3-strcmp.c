#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: pinter to the first string
 * @s2: pointer to the second string
 *
 * Return:  0 if equal,neg s1<s2,pos s1>s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	if (s1[i] == '\0')
		return (-1);
	return (1);
}
