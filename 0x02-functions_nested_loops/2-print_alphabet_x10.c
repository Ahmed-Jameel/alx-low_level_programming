#include "main.h"
/**
 * print_alphabet_x10 - Printing alphabet 10 times in lowercases
 */
void print_alphabet_x10(void)
{
	int times = 10;
	char ch = 'a';

	while (times--)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		ch = 'a';
		_putchar('\n');
	}
}
