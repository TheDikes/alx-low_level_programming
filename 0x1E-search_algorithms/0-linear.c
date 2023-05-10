#include "search_algos.h"

/**
 * linear_search - searches a value in an array of integers
 *
 * @array - pointer to the first element of the array to search in
 * @size - the number of elements in array
 * @value - the value to search for
 *
 * Return - Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value);
{
	if (array == NULL)
		return -1;

	for (int i = 0; i < size; i++) 
	{ 
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return i;
	}
	return -1;
}
