#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{

	int a,b;

	for (a = 0; a < 10; ++a)
	{
		for (b = 0; b < 10; ++b)
		{
			if (b > a && a != b)

				printf("%d%d\t", a, b);
		}
	}
return (0);
}
