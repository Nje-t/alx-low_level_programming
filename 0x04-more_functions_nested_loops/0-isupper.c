#include "main.h"

/**
 * _isupper - checks for uppercas character
 * @c: character to check
 * Return: give 1 if true, 0 if false
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
return (0);
}
