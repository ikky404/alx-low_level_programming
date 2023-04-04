#include "main.h"
/**
 *_strspn - gets the length of a prefix substring
 *
 *@s: initial segment
 *
 *@accept: bytes
 *
 *Return: number of bytes is s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (accept[x] == *s)
			{
				bytes++;
				break;
			}
			else if ((accept[x + 1]) == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
