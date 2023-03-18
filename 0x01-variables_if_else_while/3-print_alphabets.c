#include <stdio.h>
/**
 * main - start point
 *
 * Description: print letters in lower case then upper case
 *
 * return: always = 0
 */

int main(void)
{
	char ch = 'a';
	char CH = 'A';
	/*Print lower case letters*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/*print upper case letters*/

	while (ch <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar("\n");
	return (0);

}
