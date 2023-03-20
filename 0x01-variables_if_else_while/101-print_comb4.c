#include<stdio.h>

/**
 *
 *
 *
 */

int main(void)
{
	int x, w, z;

	for (x = '0'; x <= '9'; x++)
	{
		for (w = x + 1; w <= '9'; ++w)
		{
			for (z = w + 1; z <= '9'; ++z)
			{
				putchar(x);
				putchar(w);
				putchar(z);
				if (x != '7' || w != '8' || z != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
