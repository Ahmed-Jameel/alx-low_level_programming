#include "main.h"
/**
 * print_triangle - It prints a triangle of character '#'
 * @size: A given integer that represents the size of triangle
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (j >= size - i + 1)
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
