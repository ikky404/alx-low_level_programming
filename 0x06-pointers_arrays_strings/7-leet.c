#include "main.h"
/**
 * leet - encodes a string into 1337
 *@str: string
 *
 * Return: return the value of str
 */
char *leet(char *str)
{
	int x, y;
	char upper[] = "AEOTL", lower[] = "aeotl", num[] = "43071";

	for (x = 0; str[x] != 0; x++)
	{
		for (y = 0; lower[y] != 0; y++)
		{
			if (str[x] == lower[y] || str[x] == upper[y])
				str[x] = num[y];
		}
	}
	return (str);
}
