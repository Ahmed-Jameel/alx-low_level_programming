#include <stdio.h>
/**
 * main - The entry point of C program
 *
 * Description: This program prints different combnations of 2 digits
 *
 * Return: Always 0, success
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');

			if (i != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar ('\n');
	return (0);
}
