#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* main -  entry point for program */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n<0)
	{
		printf(n,"%d is negative\n");

	}else {
		printf(n,"%d is positive\n");
	}
}
