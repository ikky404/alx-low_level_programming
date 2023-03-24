#include "main.h"

/**
 * print_square - print a square using hashtag symbole
 *
 * @size: size of the square
 *
 * Return: 0 (Success)
*/

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int x, y;

		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

