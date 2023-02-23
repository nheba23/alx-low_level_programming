#include "main.h"
#include <stdio.h>
/**
 * main - Print a Fizz Buzz program
 * Return: Always 0
 */
int main(void)
{

	int x;

	for (x = 1; x < 100; x++)
	{
	if ((x % 3 == 0) && (x % 5 == 0))
	{
	printf("FIzzBuzz");
	}
	else if (x % 5 == 0)
	{
	printf("Fizz");
	}
	else
	{
	printf("%d", x);
	}
	if (x != 100)
	{
	printf(" ");
	}
	}
	return (0);
}
