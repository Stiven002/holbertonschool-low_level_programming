#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;

	x = 'a';
	while (x <= 'z')
	{
		putchar(x);
		++x;
	}
	x = 'A';
	while (x <= 'Z')
	{
		putchar(x);
		++x;
	}
	echo '\n';
	return (0);
}
