#include "main.h"
/**
 *_strcmp - compare two strings
 *
 *@s1: string 1
 *@s2: string 2
 *
 * Return: 0 when s1 == s2
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0;

	while (s1[x] == s2[x] && s1[x] && s2[x])
	{
		x++;
	}

	return (s1[x] - s2[x]);
}
