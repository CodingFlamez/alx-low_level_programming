#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural numbers from input to 98
 *		 in order se[erated by a comma followed by a space.
 * @n: The number to begin counting at.
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
