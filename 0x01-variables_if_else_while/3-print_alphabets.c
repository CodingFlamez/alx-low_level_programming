#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x = 'A';
	int y;

	do {
		y = tolower(x);
		putchar(y);
		x++;
	} while (y != 'z' );
	do {
		y = x;
		putchar(y);
		x++;
	} while (y != 'Z');
	putchar('\n');

	return (0);
}
