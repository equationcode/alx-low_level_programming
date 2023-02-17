#include <stdio.h>

/**
 * main - main function that produce output
 *
 * Return: to 0 when successful
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int f;
	float g;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %lu byte(s)", (unsigned long)sizeof(b));
	printf("Size of a long int: %lu byte(s)", (unsigned long)sizeof(c));
	printf("Size of a long long int: %lu byte(s)", (unsigned long)sizeof(f));
	printf("Size of a float: %lu byte(s)", (unsigned long)sizeof(g));
	return (0);
}
