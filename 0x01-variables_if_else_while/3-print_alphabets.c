#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x = 'A', y = 'A';

	do {
		putchar(tolower(x));
		x++;
	}while (x != 'Z');
	do {
		putchar(y);
		y++;
	}while (y != 'Z');
	putchar('\n');

	return (0);
}
