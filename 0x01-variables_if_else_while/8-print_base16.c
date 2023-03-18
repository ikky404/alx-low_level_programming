#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print numbers of base 16 in lowercase
 *
 * return: always 0 (success)
 */

int main(void)
{
	int num = '0';

	while (num <= 15)
	{
		putchar(num + '0');
		num++;
	}
	putchar(num);
	return (0);
}
