#include "search_algos.h"

/**
 * _binary_search - Function searches for a value in a sorted array
 * of integers using binary search.
 * @array: the pointer to the first element of the array to search
 * @left: the starting index of the sub-array to search.
 * @right: the ending index of the sub-array to search.
 * @value: the value to search for.
 * Return: If value is not present in array or if array is NULL, -1.
 * else,  index where value is located
 */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t j;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (j = left; j < right; j++)
			printf("%d, ", array[j]);
		printf("%d\n", array[j]);

		j = left + (right - left) / 2;
		if (array[j] == value)
			return (j);
		else if (array[j] > value)
			right = j - 1;
		else
			left = j + 1;
	}

	return (-1);
}

/**
 * exponential_search - Function searches for a value in a sorted array
 * of integers using the exponential search algorithmim
 * @array: the pointer to the first element of the array to search
 * @size: the number of elements in array
 * @value: value to search
 * Return: If value is not present in array or if array is NULL, -1.
 * else,  index where value is located
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (_binary_search(array, i / 2, right, value));
}
