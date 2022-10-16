#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* main -  entry point for program
 * Return: return 0 if error occurs
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n<0)
	{
		printf(n,"%d is negative\n");

	}else (n==0) {
		printf(n,"%d is zero\n");
	}
	
	else {
		printf(n,"%d is positive\n");
	}
	return (0);
}
