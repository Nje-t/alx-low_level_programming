#include "main.h"

/**
 * _isdigit - checks if a character is a digit
 * @c: digit to be checked
 * Return: 1 if character will be digit or 0 for any else
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
return (0);
}
