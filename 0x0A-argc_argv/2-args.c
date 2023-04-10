#include <stdio.h>
/**
* main - prints all arguments it received
*@argc: argument count
*@argv: argument vector
*Return: returns 0
*/
int main(int argc, char *argv[])
{
		int in;

		for (in = 0; in < argc; in++)
			printf("%s\n", argv[in]);

		return (0);
}
