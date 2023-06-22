#include "main.h"

/**
 *_isupper - checks for uppercase character
 *@c: The character to be checked
 * Return: 1 for uppercase characters or 0 for anyting else
 */

int _isupper(int c)

{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
