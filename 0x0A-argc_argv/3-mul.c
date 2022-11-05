#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: input integer
 * @argv: input character
 * Return: Always 0
 */


int main(int argc, char *argv[] __attribute__((unused)))
{
	int result;

	if (argc < 2)
	{
		return (1);
	}
	else
	{
		result = atoi(argc[1]) * atoi(argc[2]);
		printf("%d\n", result);
	}
	return (0);
}
