#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - funtion that print natural numbers
 *
 * @n: function parameter
 *
 * Return: 0 on success
 */

void print_to_98(int n)
{
	int h;

	if (n >= 0 && n <= 98)
	{
		for (h = n ; h <= 98 ; h++)
		{
			printf("%d", h);
			if (h != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (h = n ; h <= 98 ; h++)
		{
			printf("%d", h);
			if (h != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (h = n ; h >= 98 ; h++)
		{
			printf("%d", h);
			if (h != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n == 98)
		printf("%d", n);
}
