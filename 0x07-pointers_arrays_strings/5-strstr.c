#include "main.h"
/**
 *_strstr -  locates a substring
 *
 *@haystack: string
 *
 *@needle: substring
 *
 *Return: a pointer to the beginning of the located substring
 *or NULL if substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != 0; haystack++)
	{
		char *hay = haystack;
		char *ndl = needle;

		while (*hay == *ndl && *ndl != 0)
		{
			hay++;
			ndl++;
		}

		if (*ndl == 0)
			return (haystack);
	}

	return (0);
}
