#include "main.h"
/**
 * print_most_numbers - It prints numbers from 0 to 9 except 2 and 4
 */
void print_most_numbers(void)
{
	char num = '0';

	while (num >= '0' && num <= '9')
	{
		if (!(num == '4' || num == '2'))
			_putchar(num);
		num++;
	}
	_putchar('\n');
}
