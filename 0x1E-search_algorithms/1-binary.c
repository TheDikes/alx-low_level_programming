#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 *
 * @array: A pointer to the first element of the array to search
 * @size: the number of elements in array
 * @value: The value to search for
 *
 * Return: Always -1 if array is NULL or value to present
 */

int binary_search(int *array, size_t size, int value)
{
	int start = 0;
	int end = size - 1;
	int mid;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		printf("Searching in array: ");
		for (mid = start; mid < end; mid++)
			printf("%d, ", array[mid]);
		print("%d\n", array[mid]);

		mid = (start + end) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (-1);
}
