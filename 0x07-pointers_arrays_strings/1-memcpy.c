#include "main.h"

/**
 * _memcpy - entry point
 * @dest: input
 * @src: input
 * @n: input
 * Return: 0 on success
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
