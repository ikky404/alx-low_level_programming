#include "main.h"

/**
 * print_sign - a function that prints the sign of a number
 *
 *Return: 1 and print + if n > 0
 *0 and print 0 if n == 0
 *-1 and print - if n < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
