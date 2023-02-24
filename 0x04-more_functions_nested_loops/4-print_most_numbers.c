#include "main.h"

/**
 * print_most_numbers - function that prints numbers from 0 to 9
 * Description: prints numbers excluding 2 and 4
 * Return: numbers from 0 to 9
 */

void print_most_number(void)
{
	int x = 0;
	for (; x <= 9; x++)
	{
	if (x == 2 || x == 4)
	{
	continue;
	}
	else
	{
	_putchar(x + '0');
	}
	}
	_putchar('\n);
}
