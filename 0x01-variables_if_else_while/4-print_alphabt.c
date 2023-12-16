#include <stdio.h>
/**
 * main - The entry point of C program
 *
 * Description: This program prints alphabet in lowercase except 'e' & 'q'
 *
 * Return: Always 0, success
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
		{
			ch++;
			continue;
		}

		putchar(ch);
		ch++;
	}

	putchar('\n');

	return (0);
}
