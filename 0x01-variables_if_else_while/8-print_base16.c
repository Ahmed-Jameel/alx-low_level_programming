#include <stdio.h>
/**
 * main - The entry point of C program
 *
 * Description: This program prints all numbers of base 16 in lower case
 *
 * Return: Always 0, success
 */
int main(void)
{
	char num_ch = '0';

	while (num_ch <= '9')
	{
		putchar(num_ch);
		num_ch++;
	}

	num_ch = 'a';

	while (num_ch <= 'f')
	{
		putchar(num_ch);
		num_ch++;
	}
	putchar('\n');
	return (0);
}

