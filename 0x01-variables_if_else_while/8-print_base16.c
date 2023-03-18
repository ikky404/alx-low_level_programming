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
	int num = '15';

	while (num >= 0)
	{
		putchar(num + '15');
		num--;
	}
	putchar('\n');
	return (0);
}
