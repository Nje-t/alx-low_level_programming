#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0 (Success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;

printf("Size of a char: %l byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a int: %l byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %l byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %l byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
