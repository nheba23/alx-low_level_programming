#include "main.h"
/**
 * largest number - Prints the largest of three integres
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: Largest integer
 */
{
int largest_number(int a, int b, int c)
{
int largest;

if (a > b && a > c)
{
	largest = a;
}
else if (b > c && b > a)
{
	largest = b;
}
else if (c > b)
{
	largest = c;
}
else
{
	largest = b;
}
return (largest);
}
}
