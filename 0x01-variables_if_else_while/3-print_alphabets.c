#include <stdio.h>
/**
 * *main - Prints alphabets in lowercase and uppercase
 * Return: Always 0
 */
int main(void)
{
	char c;

	char d;

	c = 'a';
	d = 'A';

	while
		(c <= 'z') {
			putchar(c);
			c++;
		}
	while
		(c <= 'z') {
			putchar(c);
			d++;
		}
	putchar('\n');
	return (0);
}
