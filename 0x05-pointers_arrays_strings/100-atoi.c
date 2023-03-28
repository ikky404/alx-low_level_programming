#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: pointer to string
 * Return: the int value of str
 */
int _atoi(char *s)
{
	int str = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
		str *= -1;
		else if (*s >= '0' && *s <= '9')
		num = num * 10 + (*s - '0');
		else if (num > 0)
		break;
	} while (*s++);

	return (num * str);
}
