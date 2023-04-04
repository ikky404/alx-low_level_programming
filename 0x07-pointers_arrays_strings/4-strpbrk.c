#include "main.h"
/**
 *_strpbrk - searches a string for any of a set of bytes
 *
 *@s: initial segment
 *
 *@accept: bytes memory area
 *
 *Return: a pointer to the byte in s or NULL if bytes not found
 */
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (accept[x] == *s)
			return (s);
		}
		s++;
	}

	return (0);
}
