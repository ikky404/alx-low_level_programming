#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * 
 * @n: represents a number
 */
void print_times_table(int n)
{
	int num;

	if (n <= 15 && n >= 0)
	{
		for ((num = 0; num <= n; ++num)
		{
			_putchar(48);
		}
	}
	_putchar('\n');
}
