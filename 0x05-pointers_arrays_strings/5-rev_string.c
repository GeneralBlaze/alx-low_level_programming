#include "main.h"

/**
 * rev_string - function to reverse a string
 * @s: string to be changed
 * Return: nothing
 */

void rev_string(char *s)
{
	int length_of_array = 0;
	int reverse_length = 0;
	char final_output;

	while (s[length_of_array] != '\0')
	{
		length_of_array++;
	}
	while (reverse_length < length_of_array--)
	{
		final_output = s[reverse_length];
		s[reverse_length++] = s[length_of_array];
		s[length_of_array] = final_output;
	}
}
