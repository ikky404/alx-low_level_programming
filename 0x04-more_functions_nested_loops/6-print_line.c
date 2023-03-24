#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @n: number of repitetion of the symbole
 */

void print_line(int n)
{
	int s = 1;

	while (s <= n)
	{
		_putchar(95);
		s++;
	}
	_putchar('\n');
}
