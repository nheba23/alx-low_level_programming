#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Prints if 0-positive_or_negative.c
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() -  RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive");
	}
	else if (n == 0)
	{
		printf("%d is zero");
	}
	else
	{
		printf("%d is negative\n");
	}
	return (0);
}
