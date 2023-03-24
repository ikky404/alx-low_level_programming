#include"main.h"

/**
 * print_square - print a square with #
 *
 * @size: size of the square
 *
 * Return: 0 (Success)
*/

void print_square(int size)
{
	int x, y;

	for (x = 1; x <= size; ++x)
	{
		for (y = 1; y <= size; ++y)
			_putchar('#');
		_putchar('\n');
	}
}
