#include "main.h"

/**
 * _puts_recursion - function to recursively print a string
 * @s: character variable
 * Return: return nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
