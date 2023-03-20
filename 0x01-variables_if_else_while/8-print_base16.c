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
	char let = 'a';

	while (num <10)
	{
		putchar(num);
		++num;
		if (let <= 'f')
			putchar(let);
		let++;
	}
	putchar('\n');
	return 0;
}
