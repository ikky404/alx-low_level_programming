#include "main.h"

/**
 *print_last_digit - function that prints the last digit of a number
 *
 *@n: integer for the output
 *
 *Return: num
 */

int print_last_digit(int n)
{
	int num;

	if (n < 0)
		num = -1 * (n % 10);
	else
		num = n % 10;

	_putchar(num + '0');
	return (num);
}
