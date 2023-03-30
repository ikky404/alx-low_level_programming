#include "main.h"
/**
 * _strncat - concatenates two strings
 *
 *@dest: destination
 *@src: source
 *@n: integer
 *
 * Return: retun value of dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y, z;

	x = y = z = 0;

	for (; dest[z];)
	{
		z++;
	}

	while (y < n && src[y])
	{
		dest[z + x] = src[y];
		x++;
		y++;
	}

	return (dest);
}
