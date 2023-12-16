#include <stdio.h>
/**
 * main - The entry point of C program
 *
 * Description: This program prints all possible combinations
 * of single_digit numbers
 *
 * Return: Always 0, success
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + '0');

		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}

		num++;
	}

	putchar('\n');
	return (0);
}
