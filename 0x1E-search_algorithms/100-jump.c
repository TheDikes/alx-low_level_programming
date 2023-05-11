#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array of integers using
 *                 the Jump search algorithm.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index of the first occurrence of value in array, or -1 if
 * value is not present in array or if array is NULL.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;

	if (array == NULL || size == 0)
		return (-1);
	while (array[step] <= value && step < size)
	{
		prev = step;
		step += sqrt(size);
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	}

	while (array[prev] < value && prev < size)
	{
		prev++;
		if (prev == fmin(step, size))
			return (-1);
		printf("Value checked array[%d]\n", prev, array[prev]);
	}

	if (array[prev] == value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		return (prev);
	}

	return (-1);
}
