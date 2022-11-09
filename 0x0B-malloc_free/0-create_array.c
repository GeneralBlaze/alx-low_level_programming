#include "main.h"
#include "stdlib.h"

/**
 * create_array -function to create array of char
 * @size: integer varaible
 * @c: character variable
 * Return: NULL if size is 0 and return array pointer
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	array = (char *)malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	else if (array == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}
	return (array);
	}
}
