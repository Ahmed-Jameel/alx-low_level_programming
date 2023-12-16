#include <stdio.h>
/**
 * main - The entry point of C program
 *
 * Description: This program writes alphabet in lower cases
 *
 * Return: Always 0, success
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');
	return (0);
}
