#include "search_algos.h"

/**
 * print_array - Funtion that prints the contents of an array.
 * @array: The array to print.
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
 * binary_search_index1 - Function that searches a value in a sorted
 * array using a binary search.
 * @array: The array.
 * @l: Left index.
 * @r: Right index.
 * @value: The value.
 * Return: The first index of the value in the array, otherwise -1.
 */

int binary_search_index1(int *array, size_t l, size_t r, int value)
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
		return (binary_search_index1(array, l, k - 1, value));
	}
	else if (value == *(array + k))
	{
		return ((int)k);
	}
	else
	{
		return (binary_search_index1(array, k + 1, r, value));
	}
}

/**
 * exponential_search - Function that searches a value in a sorted
 * array using an exponential search.
 * @array: The array.
 * @size: The size of the array.
 * @value: The value.
 * Return: The index of the value in the array, otherwise -1.
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t low = 2, high = 3;

	if (!array || !size)
		return (-1);
	if (size < 3)
	{
		low = 2;
		high = 3;
	}
	else
	{
		while (low < size)
		{
			printf("Value checked array[%lu] = [%d]\n", low, array[low]);
			if (
				((array[low] <= value) && (array[high] >= value))
				|| ((low * 3) >= size)
				)
				break;
			low *= 2;
			high = high * 2 < size ? high * 2 : size - 1;
		}
	}
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	return (binary_search_index1(array, low, high, value));
}
