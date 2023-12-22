#include "main.h"
/**
 * more_numbers - It prints numbers from 0 to 14 for 10 times
 */
void more_numbers(void)
{
	int times = 10;

	while (times--)
	{
		int i;

		for (i = 0; i <= 14; i++)
		{
			int digit = (i < 10) ? i : (i % 10);

			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar(digit + '0');
		}
		_putchar('\n');
	}
}
