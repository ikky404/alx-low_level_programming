#include "main.h"
/**
 *_memset -  function that fills memory with a constant byte.
 *@s: memory
 *@b: constant bytes
 *@n: number of bytes
 *
 *Return:  value of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
