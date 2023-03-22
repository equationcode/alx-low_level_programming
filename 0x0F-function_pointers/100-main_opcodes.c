#include<stdio.h>
#include<stdlib.h>

/**
 * main- function that prints the opcodes of itself
 *@argc: the number of parameters.
 *@argv: the parameeters in the case the number of bytes
 *Return: 0 in succes
 */

int main(int argc, char *argv[])
{
	int bytes, index;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (index = 0; index < bytes; index++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (index == bytes - 1)
			continue;
		printf(" ");

		address++;
	}
	printf("\n");

	return (0);
}
