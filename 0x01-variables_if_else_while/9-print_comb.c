#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print comb of numbers'
 * Return: Always 0
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
		putchar(',');
	}
	if (d != '9')
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

