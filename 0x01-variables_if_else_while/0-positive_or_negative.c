#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Returne: always 0 (success)
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* the code*/
	if (n>0)
		printf("%i is positive\n, num");
	else if (n == 0)
		printf("%i is zero\n, num");
	else 
		printf("%i is negative\n, num");

	return (0);
}
