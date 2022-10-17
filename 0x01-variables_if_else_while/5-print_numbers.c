#include <stdio.h>
/**
 *main-code entry point or code begining
 *Return:show 0 if error
 */

int main(void)
{
	char number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}
	putchar('\n');
	return (0);
}
