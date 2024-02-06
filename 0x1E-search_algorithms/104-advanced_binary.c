#include "search_algos.h"

/**
 * advanced_binary_search - Function searches for a value in a sorted array
 * of integers using binary search.
 * @array: the pointer to the first element of the array to search
 * @left: the starting index of the sub-array to search.
 * @right: The ending index of the sub-array to search.
 * @value: the value to search for.
 * Return: If value is not present in array or if array is NULL, -1.
 * else,  index where value is located
 */
int advanced_binary_search(int *array, size_t left, size_t right, int value)
{
	size_t j;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (j = left; j < right; j++)
		printf("%d, ", array[j]);
	printf("%d\n", array[j]);

	j = left + (right - left) / 2;
	if (array[j] == value && (j == left || array[j - 1] != value))
	{
		return (j);
	}
	else if (array[j] >= value)
	{
		return (advanced_binary_search(array, left, j, value));
	}
	return (advanced_binary_search(array, j + 1, right, value));
}

/**
 * advanced_binary - Function searches for a value in a sorted array
 * of integers using binary search.
 * @array: the pointer to the first element of the array to search
 * @size: the number of elements in the array
 * @value: the value to search for.
 * Return: If value is not present in array or if array is NULL, -1.
 * else,  index where value is located
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_search(array, 0, size - 1, value));
}
