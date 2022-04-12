#include "main.h"

/**
 * Print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */

void print_alphabet(void)
{
	int a = 0, b;

	while (a <= 10)
	{

		for (b = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		a++;
		_putchar('\n');
		
	}
}
