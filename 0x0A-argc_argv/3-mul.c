#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: input integer
 * @argv: input character
 * Return: Always 0 when true and 1 when error
 */


int main(int argc __attribute__((unused)), char *argv[])
{
	int result, len = atoi(sizeof(argv)/sizeof(argv[1]));

	if (len < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	return (0);
}
