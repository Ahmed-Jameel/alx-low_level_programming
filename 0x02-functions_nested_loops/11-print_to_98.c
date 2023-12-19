#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - It prints numbers from given n to 98
 * @n: A given integer to start from
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n++;
		}
		putchar('\n');
	}
	else
	{
		int i;

		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}

		putchar('\n');
	}
}
