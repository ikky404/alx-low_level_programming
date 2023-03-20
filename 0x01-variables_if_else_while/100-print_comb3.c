#include<stdio.h>

/**
 *main - entry point
 *
 *description:
 *
 *Return: always 0 (success)
 */

int main(void)
{
	int num, NUM;

	for (num = 0; num < 9; num++)
	{
		for (NUM = num + 1; NUM < 10; NUM++)
		{

			putchar((num % 10) + '0');
			putchar((NUM % 10) + '0');

			if (num == 8 && NUM == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
