#include "main.h"
/**
 *_memcpy -  copies memory area.
 *@dest: memory area 2
 *@src: memory area 1
 *@n: number of bytes
 *Return: returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		*(dest + x) =  *(src + x);

	return (dest);
}
