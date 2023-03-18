#include <stdio.h>
/**
 *
 * main - print the letters
 *
 * Description: print all letters
 *
 * Return: always 0 = success
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
