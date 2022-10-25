#include "main.h"

/**
 * swap_int - function to swap a and b
 * @a: interger value
 * @b: integer value
 */

void swap_int(int *a, int *b)
{
	*a = &b;
	*b = &a;
}
