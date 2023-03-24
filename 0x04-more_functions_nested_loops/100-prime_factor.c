#include <stdio.h>

/**
 * main - prints the largest prime factor
 * of the number 612852475143
 *
 *  Return: 0 (success)
 */
int main(void)
{
	unsigned long int j = 3, k = 612852475143;

	for (; j < 12057; j += 2)
	{
		while (k % j == 0 && k != j)
			k /= j;
	}
	printf("%lu\n", k);
	return (0);
}
