#include "search_algos.h"

/**
 * linear_search - Function that searches for a value in an array of
 * integers using the Linear search algorithm.
 * @array: The search in array.
 * @size: The seize/length of the array.
 * @value: The value to check.
 * Return: The first index value in the array, otherwise -1.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; (i < size) && (array); i++)
	{
		if (*(array + i) == value)
		{
			printf("value checked array[%d] = [%d]\n", (int)i, *(array + i));
			return (i);
		}
		else
		{
			printf("value checked array[%d] = [%d]\n", (int)i, *(array + i));
		}
	}
	return (-1);
}
