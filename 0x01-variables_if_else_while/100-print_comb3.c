#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{

	int a, b;

	for (a = 0; a < 10; ++a)
	{
		for (b = 0; b < 10; ++b)
		{
			if (b > a && a != b)

			{

				putchar('0' + a);
				putchar('0' + b);

				if (a < 8 || b != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
return (0);
}
