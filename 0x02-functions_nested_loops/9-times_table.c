#include "main.h"
#include <stdio.h>
/**
 * times_table - It prints 9 times table
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int digits = 0;

			result = i * j;
			digits = get_digits_number(result);

			if (result == 0)
				_putchar('0');
			else
				print_num(result);

			_putchar(',');

			if (j != 9)
			{
				if (digits == 1)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (digits == 2)
					_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

/**
 * print_num - It prints numbers using _putchar
 * @n: a given number to be printed
 */
void print_num(int n)
{
	if (n == 0)
		return;

	print_num(n / 10);
	_putchar(n % 10 + '0');
}

/**
 * get_digits_number - it gets number of digits for a number
 * @n: A given integer
 *
 * Description: It gets the number of digits for a number
 *
 * Return: The number of digits
 */
int get_digits_number(int n)
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

/**
 * print_separator: It prints seperators
 * @digits: The number of digits
 *
 * Description: It prints separators
 */
void print_separator(int digits)
{
	_putchar(',');

	/*printf("DEBUG DIGTS are %d\n", digits);*/

	if (digits > 1)
		_putchar(' ');
	else
	{
		_putchar(' ');
		_putchar(' ');
	}
}
