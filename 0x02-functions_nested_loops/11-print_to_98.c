#include "main.h"
#include <stdio.h>

/**
 *print_to_98 - prints all natural numbers from n to 98
 *
 *@n: input
 */

void print_to_98(int n)
{
	int calc;

	if (n > 98)
		for (calc = n; calc > 98; --calc)
			printf("%d, ", calc);
	else
		for (calc = n; calc < 98; ++calc)
			printf("%d, ", calc);
	printf("98\n");
}
