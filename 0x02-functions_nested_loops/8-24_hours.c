#include "main.h"

/**
 * jack_bauer - function that prints 24hours time
 *
 * Return: 0 on success
 */


void jack_bauer(void)
{
	int h;
	int k;

	for (h = 0 ; h < 24 ; h++)
	{
		for (k = 0 ; k < 60 ; k++)
		{
			_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
			_putchar(':');
			_putchar(k / 10 + '0');
			_putchar(k % 10 + '0');
			_putchar('\n');
		}
	}
}
