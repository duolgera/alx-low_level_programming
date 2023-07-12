#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of argument
 * @av: The array of arguments.
 * Return: Pointer to the concatenated string, or NULL if fail.
 */

char *argstostr(int ac, char **av)
{
	char *concat;
	int i, j, k, len, total_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (len = 0; av[i][len] != '\0';)
			len++;
		total_len += len + 1;
	}
	concat = malloc(total_len * sizeof(char));
	if (concat == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0';)
			j++;
		concat[k++] = av[i][j];
		concat[k++] = '\n';
	}
	return (concat);
}
