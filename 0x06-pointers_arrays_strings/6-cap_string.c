#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 *
 * @str: string
 *
 * Return: value of str
 */
char *cap_string(char *str)
{
	int x, y;
	char s[] = {44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 32, 10, 9};

	x = 0;

	while (str[x] != 0)
	{
		if (x == 0 && str[x] >= 97 && str[x] <= 122)
		{
			str[x] = str[x] - 32;
		}
		y = 0;
		while (s[y] != 0)
		{
			if (s[y] == str[x] && (str[x + 1] >= 97 && str[x + 1] <= 122))
			{
				str[x + 1] = str[x + 1] - 32;
			}
			y++;
		}
		x++;
	}
	return (str);
}
