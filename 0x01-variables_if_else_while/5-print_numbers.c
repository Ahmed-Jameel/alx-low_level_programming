#include <stdio.h>
/**
 * main - Entry point of C program
 *
 * Description: This program prints number from 0 to 9
 *
 * Return: Always 0, success
 */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');
	return (0);
}
