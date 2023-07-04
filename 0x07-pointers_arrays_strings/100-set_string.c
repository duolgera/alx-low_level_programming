#include "main.h"

/**
 * set_string - set the value of pointers to a char
 * @s: pointer to  a pointer to char
 * @to: pointer to char
 */
void set_string(char **s, char *to)
{
	*s = to;
}

