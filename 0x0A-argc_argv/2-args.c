#include <stdio.h>
#include "main.h"
/**
 * main - Print all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
