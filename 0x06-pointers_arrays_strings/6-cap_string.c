#include "main.h"

/**
 * *cap_string - function to change first
 * letter of every word to capital letter
 * @str: string to check
 * Return: return the worked on striing
 */

char *cap_string(char *str)
{
	int i = 0;
	int j = 0;
	int k;
	int new_i;
	char sep_1 [] = {',', ';', '.', '!', '?', '"', '(', ')', '{', ' ', '}'};

	for (i = 0; str[i] != '\0'; i++)
	{
		while (sep_1[j] != '\0')
		{
			j++;
			if (str[i] == sep_1[j])
			{
				i++;
				new_i = i++;
			}
			else
			{
				for (k = new_i; str[k] != '\0'; k++)
				{
					if (str[k] >= 'a' && str[k] <= 'z')
					{
						str[k] = str[k] - 32;
					}
				}
			}

		}
	}
	return (str);
}
