#include "main.h"
/**
 * _strncpy - Copies a string
 * @dest: The buffer storing the string copy
 * @src: The source string
 * @n: The maximum number of bytes to copied from src
 * @Return: A pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src = 0;

	while (src[index++])
		src++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = '\0';

	return (dest);
}
