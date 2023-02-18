#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 is success
 */

int main(void)
{
	int i;
	char h;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (h = 'a' ; h <= 'f' ; h++)
		putchar(h);
	putchar('\n');
	return (0);
}
