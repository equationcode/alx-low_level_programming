#include "search_algos.h"

/**
 * print_array - Function that prints contents of an array.
 * @array: The array to print.
 * @l: Left index of the array.
 * @r: Right index of the array.
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
 * @array: The search in array.
 * @l: Left index of the array.
 * @r: Right index of the array.
 * @value: The value to look for.
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
		return (binary_search_index(array, l, k - 1, value));
	else if (value == *(array + k))
		return ((int)k);
	else
		return (binary_search_index(array, k + 1, r, value));
}

/**
 * binary_search - Function that searches for a value in a sorted
 * array of integers using the Binary search algorithm.
 * @array: The array to search in.
 * @size: The size of the array.
 * @value: The value.
 * Return: The index of the value in the array, otherwise -1.
 */

int binary_search(int *array, size_t size, int value)
{
	return (binary_search_index(array, 0, size - 1, value));
}
