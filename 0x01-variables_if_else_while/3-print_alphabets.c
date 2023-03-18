#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print letters in lower case then upper case
 *
 * Return: Always 0 (success)
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

	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);

}
