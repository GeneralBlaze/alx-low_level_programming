#include <stdio.h>

/**
 *main-program entry point.
 *Return:0 if no error, non zero if error.
 */
int main(void)
{
	char revAlphabets;

	for (revAlphabets = 'z'; revAlphabets <= 'a'; revAlphabets--)
	{
		putchar(revAlphabets);
	}
		putchar('\n');
		return (0);
}
