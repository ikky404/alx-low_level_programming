#include "main.h"
/**
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
		_putchar(ch);
		ch++;
	}
	_putchar('\n');

	return (0);
}
