#include <stdio.h>

/**
 *main-program entry point.
 *Return:0 if no error, non zero if error.
 */
int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		if (alphabets == 'e' || alphabets == 'q')
		continue;
		putchar(alphabets);
	}
		putchar('\n');
		return (0);
}
