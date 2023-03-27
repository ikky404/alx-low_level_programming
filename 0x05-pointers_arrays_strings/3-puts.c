#include "main.h"
/**
 *
 *
 *
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
