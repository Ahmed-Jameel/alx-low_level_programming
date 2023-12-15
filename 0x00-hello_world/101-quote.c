#include<stdio.h>
#include<string.h>
#include<unistd.h>
/**
 * main - Entry point of C program
 *
 * Description: This program prints a statment to stderr
 *
 * Return: Always 1, error
 */
int main(void)
{
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int len = strlen(str);

	write(2, str, len);
	return (1);
}
