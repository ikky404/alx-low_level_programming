#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: 0 (Success)
 */

void more_numbers(void)
{
	int x, y;

	x = 0;

	while (x < 10)
	{
		for (y = 0; y < 15; y++)
		{
			if (y >= 10)
			{
				_putchar((y / 10) + 48);
			}
			_putchar((y % 10) + 48);
		}

		_putchar('\n');

		x++;
	}
}
