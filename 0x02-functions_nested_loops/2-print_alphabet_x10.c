#include "main.h"

/**
 * Print_alphabet_x10 - prints the alphabet in lowercase, followed by a new line.
 */

void print_alphabet_x10(void)
{
	int a = 0, b;

	while (a <= 10)
	{

		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
		a++;
		_putchar('\n');
		
	}
}
