#include "main.h"
#include <stdio.h>

/**
 * _puts - a function that returns the length of a string.
 * @s: An input character
 * Return: Nothing
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		_putchar(s[len]);
		len++;
	}
	_putchar('\n');
}
