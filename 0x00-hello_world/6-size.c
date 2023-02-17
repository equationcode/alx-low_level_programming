#include <stdio.h>

/**
 * main - main function that produce output
 *
 * Return: to 0 when successful
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %lu byte(s)", (unsigned long)sizeof(int));
	printf("Size of a long int: %lu byte(s)", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %lu byte(s)", (unsigned long)sizeof(long long int));
	printf("Size of a float: %lu byte(s)", (unsigned long)sizeof(float));
	return (0);
}
