#include "main.h"
/**
 * print_rev - prints a string, in reverse
 *@s: string
 *return: void
 */
void print_rev(char *s)
{
	int sen = 0;

	while (s[sen])
	{
		sen++;
	}
	sen--;
	for (; sen >= 0; sen--)
	_putchar(s[sen]);

	_putchar('\n');
}
