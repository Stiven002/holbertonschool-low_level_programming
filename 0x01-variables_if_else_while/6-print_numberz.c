#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	x = 28;
	while  (x < 38)
	{
		putchar(x);
		x++;
	}
	putchar('\n');

	return (0);
}
