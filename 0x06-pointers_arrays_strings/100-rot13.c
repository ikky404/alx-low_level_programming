#include "main.h"
/**
 * rot13 - encodes a string using rot13
 *
 *@str: string
 *
 * Return: value of string
 */
char *rot13(char *str)
{
	int w, x;
	char y[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char z[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (w = 0; str[w] != 0; w++)
	{
		for (x = 0; y[x] != 0; x++)
		{
			if (str[w] == y[x])
			{
				str[w] = z[x];
				break;
			}
		}
	}
	return (str);
}
