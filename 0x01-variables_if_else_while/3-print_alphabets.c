#include <stdio.h>

/**
 *main-program entry point.
 *Return:0 if no error, non zero if error.
*/
int main(void)
{
	char smallAlphabets;
	char capsAlphabets;

	for (smallAlphabets = 'a'; smallAlphabets <= 'z'; smallAlphabets++)
	{
		putchar(smallAlphabets);
	}
	for (capsAlphabets = 'A'; capsAlphabets <= 'Z'; capsAlphabets++)
	{
		putchar(capsAlphabets);
	}
		putchar('\n');
		return (0);
}
