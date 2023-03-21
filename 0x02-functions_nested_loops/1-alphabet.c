#include "main.h"
/**
 *print_alphabet - prints the alphabets in lowercase a to z
 *
 */

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}

