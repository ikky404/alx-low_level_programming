#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
	int a;
	unsigned long int b, c, d, e;

	b = 1;
	c = 2;
	e = 0;

	for (a = 1; a <= 33; ++a)
	{
		if (b < 4000000 && (b % 2) == 0)
		{
			e = e + b;
		}
		d = b + c;
		y = c;
		c = d;
	}

	printf("%lu\n", e);

	return (0);
}
