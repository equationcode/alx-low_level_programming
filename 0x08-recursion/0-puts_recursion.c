#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: string to print
 *
 * Return: 1 on success. On error, -1 is returned and
 * errno is set appropriately
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
