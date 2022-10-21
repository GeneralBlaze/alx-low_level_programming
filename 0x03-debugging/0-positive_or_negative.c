#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main-entry point for program
 *Return: return 0 if error occurs
 */
void positive_or_negative(int n)
{
	int n;

	if (n < 0)
	{
		printf("%d is negative\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is positive\n", n);
	}
}
