#include <stdio.h>
/**
 * main - The entry point of C program
 *
 * description: This program prints numbers from 0 to 9
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');

	return (0);
}
