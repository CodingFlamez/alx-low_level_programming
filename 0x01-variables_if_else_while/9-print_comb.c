#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	for (x = 0; x < 10; ++x)
	{
		putchar(48 + x);
			if (x < 9)
			{
				putchar(',');
				putchar(' ');
			}
	}
	putchar('\n');
	return (0);
}
