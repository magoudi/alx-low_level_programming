#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array using binary search.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 * Return: Index where the value is located, or -1 if the value is not found.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, mid;
	int ret;

	if (array == NULL)
		return (-1);

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");

	if (size == 1)
	{
	if (array[0] == value)
	return (0);
	else
	return (-1);
	}

	mid = (size - 1) / 2;

	if (array[mid] == value)
	return (mid);
	else if (array[mid] < value)
	{
	ret = binary_search(array + mid + 1, size - mid - 1, value);
	if (ret == -1)
	return (-1);
	else
	return (mid + 1 + ret);
	}
	else
	{
	return (binary_search(array, mid, value));
	}
}
