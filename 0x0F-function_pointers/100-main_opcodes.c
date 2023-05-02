#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the opcode of it own function
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: 1 if num of arg is incorrect, 2 if num of bytes is negative
 */
int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int i, nbytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nbytes = atoi(argv[1]);

	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < nbytes; i++)
	{
		printf("%02x", opc[i] & 0xFF);
		if (i != nbytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
