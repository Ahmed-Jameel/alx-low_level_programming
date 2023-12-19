#include "main.h"
/**
 * jack_bauer - A function that prints every minute of a day
 */
void jack_bauer(void)
{
	short i, ii, iii, iv;

	for (i = 0; i <= 2; i++)
	{
		for (ii = 0; ii <= 9; ii++)
		{
			for (iii = 0; iii <= 5; iii++)
			{
				for (iv = 0; iv <= 9; iv++)
				{
					_putchar(i + '0');
					_putchar(ii + '0');
					_putchar(':');
					_putchar(iii + '0');
					_putchar(iv + '0');
					_putchar('\n');
				}
			}
			if (i == 2 && ii == 3)
				break;
		}
	}
}
