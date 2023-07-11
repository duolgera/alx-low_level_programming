#include "main.h"
#include <stdlib.h>

/**
 * _strdup - return a pointer to newly allocated space
 * @str: The string to be duplicated
 * Return: Pointer to the duplicated string,or NULL if str is NULL
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int len, i;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0';)
		len++;

	dup = malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		dup[i] = str[i];
	return (dup);
}
