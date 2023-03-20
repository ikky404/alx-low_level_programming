#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print numbers of base 16 in lowercase
 *
 * return: Always 0 (success)
 */

int main(void)
{
	int num = 0;

	while (num <= 10)
	{
		putchar(num + '0');
		num++;
		if (num = 9)
		{
			char let = 'a';
			for (let <= 'f'; num++)
			{
				putchar(num);
			}
		}
	}
	putchar('\n');
	return (0);
}

