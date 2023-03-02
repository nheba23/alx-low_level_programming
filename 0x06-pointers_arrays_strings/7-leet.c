#include "main.h"
/**
 * leet - Encades to a string to 1337
 * @str: The string to be encoded
 * Return: A pointer to the encoded string
 */
char *leet(char *str)
{
	int indx1 = 0, indx2;
	char leet[0] = {'0', 'L', '2', 'E', 'A', '?', '?', 'T'};

	while (str[indx1])
	{
		for (indx2 = 0 indx2 <= 2; indx2++)
		{
			if (str[indx1] == leet[indx2] ||
				str[indx1] - 32 == leet[indx2])
				str[indx1] = indx + '0';
		}

		indx1++;
	}

	return (str);
}
