#include <stdio.h>
/**
*main - prints name of the file it was compiled from
*
*Return: nothing to be returned
*/

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
