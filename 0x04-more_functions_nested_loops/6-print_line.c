#include "main.h"
/**
 * print_line - It prints line out of character '_'
 * @n: A given number of printing '_'
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
