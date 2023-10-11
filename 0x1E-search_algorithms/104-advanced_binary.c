#include "search_algos.h"

/**
 * print_array - Function that prints the contents of an array.
 * @array: The array.
 * @l: Left index.
 * @r: Right index.
 */

void print_array(int *array, size_t l, size_t r)
{
	size_t i;

	if (array)
	{
		printf("Searching in array: ");
		for (i = l; i < l + (r - l + 1); i++)
			printf("%d%s", *(array + i), i < l + (r - l) ? ", " : "\n");
	}
}

/**
 * binary_search_index - Function that searches a value in a sorted
 * array using a binary search.
 * @array: The array.
 * @l: Left index.
 * @r: Right index.
 * @value: The value.
 * Return: The first index of the value in the array, otherwise -1.
 */

int binary_search_index(int *array, size_t l, size_t r, int value)
{
	size_t k;

	if (!array)
		return (-1);
	print_array(array, l, r);
	k = l + ((r - l) / 2);
	if (l == r)
		return (*(array + k) == value ? (int)k : -1);
	if (value < *(array + k))
	{
		return (binary_search_index(array, l, k, value));
	}
	else if (value == *(array + k))
	{
		if ((k > 0) && (*(array + k - 1) == value))
		{
			return (binary_search_index(array, l, k, value));
		}
		return ((int)k);
	}
	else
	{
		return (binary_search_index(array, k + 1, r, value));
	}
}

/**
 * advanced_binary - Function that searches a value in a sorted array
 * using a binary search.
 * @array: The array.
 * @size: The size.
 * @value: The value.
 * Return: The first index of the value in the array, otherwise -1.
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (!array || !size)
		return (-1);
	else if ((size == 1) && (*array == value))
		return (0);
	return (binary_search_index(array, 0, size - 1, value));
}
