#include "main.h"

/**
 * create_array -function to create array of char
 * @size: integer varaible
 * @c: character variable
 * Return: NULL if size is 0 and return array pointer
 */

char *create_array(unsigned int size, char c)
{
	c = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			c[i] = c;
		}
	return (create_array);
	}
}
