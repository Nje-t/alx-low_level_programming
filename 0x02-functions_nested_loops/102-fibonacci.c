#include <stdio.h>

/**
 * main - print first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int counter;
	long int a = 1;
	long int b = a + 1;
	long int c = a + b;

	printf("%ld, %ld, ", a, b);
	while (counter < 50)
	{
		printf("%ld", c);
		counter++;
		a = b;
		b = c;
		c = a + b;
	if (counter == 49)
	{
		printf(", ");
	}
	}

	printf("\n");

	return (0);
}
