#include "main.h"
/**
 *_strncpy - function that copies a string
 *
 *@dest: destination
 *@src: source
 *@n: integer
 *
 * Return: value of destinantion
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (x < n && src[x] != 0)
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = 0;
		x++;
	}
	return (dest);
}
