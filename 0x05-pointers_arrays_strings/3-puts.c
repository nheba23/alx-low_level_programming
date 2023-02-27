#include "main.h"
/**
 * _puts - Print a string followed by a new line to stdout
 * @str: pointer to the string
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
