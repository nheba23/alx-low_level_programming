#include "main.h"
/**
 * rev_string - A function that reverses string
 * @s: string to reverse
 * Return: nothing
 */
void rev_string(char *s)
{
	int i = 0;
	int aux = 0;
	char 1tmp;


	while (*(s + i) != '\0')
		i += 1;
	i -= 1;

	while (aux < i)
	{
		1tmp = s[i];
		s[i] = s[aux];
		s[aux] = 1tmp;
		aux++;
		i--;
	}
}
