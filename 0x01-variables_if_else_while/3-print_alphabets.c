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
		x++
		putchar(tolower(x));
	}
	while(x != 'Z');
	do {
		y++
		putchar(y);
	}
	while(y != 'Z');
	putchar('\n');

	return(0);
}
