#include "main.h"

/*
 * @*n - integer pointer variable
 */

void reset_to_98(int *n)
{
	int *pointer;
	int number_to_change;

	number_to_change = 98;
	*pointer = &number_to_change;
}
