#include "main.h"
#include <stdio.h>
/**
 * print_times_table - It prints n times table
 * @n: a given integer to print its table
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i, j;

		for (i = 0; i <= n ; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int digits, result = i * j;

				if (j == 0)
				{
					printf("%d", result);
					/*To handle case n = 0*/
					if (n != 0)
						putchar(',');
				}
				else
				{
					digits = get_digits(result);
					if (digits == 1)
						printf("   ");
					else if (digits == 2)
						printf("  ");
					else
						printf(" ");

					printf("%d", result);

					if (j != n)
						putchar(',');
				}
			}
			putchar('\n');
		}
	}
}


/**
 * get_digits - It gets number of digits
 * @n: A given integer
 *
 * Return: The number of digits
 */
int get_digits(int n)
{
	int cnt = 0;

	if (n == 0)
		return (1);

	while (n > 0)
	{
		cnt++;
		n /= 10;
	}
	return (cnt);
}
