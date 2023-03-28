#include "main.h"
/**
 * rev_string - a function that reverses a string
 *@s: string
 *return: void
 */
void rev_string(char *s)
{
	int a = 0;
	int b = 0;
	int c = 0;

	while (s[a])
	{
		a++;
	}
	a = a - 1;

	while (b < a - 1 / 2)
	{
		c = s[b];
		s[b] = s[a];
		s[a] = c;

		a--;
		b++;
	}
}
