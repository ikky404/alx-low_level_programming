#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 *
 *@a: array
 *@n: number of prints
 */
void reverse_array(int *a, int n)
{
	int x, y;

	for (x = n - 1; x > n / 2; x--)
	{
		y = a[n - 1 - x];
		a[n - 1 - x] = a[x];
		a[x] = y;
	}
}
