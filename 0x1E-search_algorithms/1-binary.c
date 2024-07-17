#include "search_algos.h"

/**
 * binary_search - jdsngjanergn wrnf
 * @array: sfgasrgvasfgv
 * @size: kgdnflernsgdlfn
 * @value: snglarnsdgjlnerg
 * Return: sjnvnfcwnflsncslgnf
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i;
	int ret;

	if (array == NULL)
		return (-1);

	printf("Searching in array: ");
	for (i = 0; i < size - 1; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[size - 1]);

	if (size == 1)
	{
		if (array[0] == value)
			return (1);
		else
			return (-1);
	}

	if (array[(size - 1) / 2] == value)
		return ((size - 1) / 2);
	else if (array[(size - 1) / 2] < value)
	{
		ret = binary_search(array + (int)ceil((double)size / 2),
							ceil((double)(size - 1) / 2), value);
		if (ret == -1)
			return (-1);
		else
			return (ret + ceil((double)(size - 1) / 2));
	}
	else
	{
		ret = binary_search(array, ((size - 1) / 2), value);
		return (ret);
	}
}
