#include "search_algos.h"

/**
 * linear_search - search for a value in an array of ints using
 * a linear search algorithm
 * @array: array to be searched in
 * @size: size of the array
 * @value: value to be searched for
 * Return: Index of value, otherwise NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
