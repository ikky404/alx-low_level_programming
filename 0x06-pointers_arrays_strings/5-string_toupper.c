#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase in a string
 *
 *@str: string
 *
 * Return: return the str
 */
char *string_toupper(char *str)
{
	int x = 0;

	while (str[x] != 0)
	{
		if (str[x] >= 'a' && str[x] <= 'z')
			str[x] -= 32;
		x++;
	}

	return (str);
}
