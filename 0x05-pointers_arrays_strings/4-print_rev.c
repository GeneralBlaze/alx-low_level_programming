#include "main.h"
#include <stdio.h>

/**
 * print_rev - function to print in reverse
 * @s: char date type
 */

void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	while (length)
	{
		_putchar(s[--length]);
	}
	_putchar('\n');
}
