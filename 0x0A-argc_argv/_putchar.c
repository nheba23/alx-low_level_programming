#include <stdio.h>
#include "main.h"

/**
 * _putchar - write the character c to stdout
 * @c: ther character to print
 * Return: On success 1
 * On eror, -1 is returned and errno is set approprately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
