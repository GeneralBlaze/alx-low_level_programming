#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0
 */
int main(void)
{
	char numberHex;
	char alphaHex;

	for (numberHex = '0'; numberHex <= '9'; numberHex++)
		putchar (numberHex);
	for (alphaHex = 'a'; alphaHex <= 'f'; alphaHex++)
		putchar(alphaHex);
	putchar('\n');
	return (0);
}
