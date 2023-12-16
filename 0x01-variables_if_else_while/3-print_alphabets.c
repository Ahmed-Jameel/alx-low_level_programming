#include <stdio.h>

/**
 * main - The entry point of C program
 *
 * Description: This program prints alphabet in lower and upper cases
 *
 * Return: Always (0), success
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	ch = 'A';

	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
