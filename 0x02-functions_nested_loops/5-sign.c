#include "main.h"
/**
 * print_sign - It prints sign of a given integer
 * @n: A given integer to be checked
 *
 * Description: It prints a sign of a number according to some cases
 * case (> 0) => prints +
 * case (= 0) => prints 0
 * case (< 0) => prints -
 *
 * Return: It depends, case (> 0) => 1
 * case (< 0) => -1
 * case (= 0) => 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
