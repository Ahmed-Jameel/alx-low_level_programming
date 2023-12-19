#include "main.h"
/**
 * print_last_digit - It prints the last digit of a given number
 * @n: A given number to computes its last digit
 *
 * Description: It prints the last digit of a given number
 *
 * Return: The last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = -n;

	n %= 10;
	_putchar(n + '0');
	return (n);
}
