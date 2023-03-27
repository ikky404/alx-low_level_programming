#include "main.h"
/**
 * _puts - prints a string
 *
 * @str: string
 *
 * Return: 0
 */
void _puts(char *str)
{
	while (*str != 0)
	{
		putchar(*str + 0);
		str++;
	}
	putchar('\n');
}
