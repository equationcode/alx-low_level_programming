#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Function that searches a value in a sorted array
 * using a jump search.
 * @array: The array.
 * @size: The size of the array.
 * @value: The value.
 * Return: The index of the value in the array, otherwise -1.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step, b = 0, c = 0;

	if (!array)
		return (-1);
	step = (size_t)sqrt(size);
	while ((c < size) && (*(array + c) < value))
	{
		printf("Value checked array[%d] = [%d]\n", (int)c, *(array + c));
		b = c;
		c += step;
		if (b >= size)
			return (-1);
	}
	printf("Value found between indexes [%d] and [%d]\n", (int)b, (int)c);
	c = c >= size ? size - 1 : c;
	for (; (b <= c) && (*(array + b) <= value); b++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)b, *(array + b));
		if (*(array + b) == value)
			return ((int)b);
	}
	return (-1);
}
