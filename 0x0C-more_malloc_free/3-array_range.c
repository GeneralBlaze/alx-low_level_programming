#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - A function that creates an array of integers
 * @min: min number to start
 * @max: max number to start
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *new_array;
	int size_of_new_array, i;

	if (min > max)
		return (NULL);

	size_of_new_array = max - min;
	new_array = malloc((size_of_new_array + 1) * sizeof(int));

	if (new_array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= size_of_new_array; i++)
	{
		new_array[i] = min++;
	}

	return (new_array);
}
