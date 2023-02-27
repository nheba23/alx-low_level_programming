#include "main.h"
/**
 * _strlen - Returns the length of a string
 * @s: Pointer to the string
 * Return: void
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	i++;

	return (i);
}
