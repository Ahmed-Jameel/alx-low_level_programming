#include <stdio.h>
/**
 * main - Entry point of C program
 *
 * Description: This program prints Fibonacci sequence
 *
 * Return: Always 0, success
 */
int main(void)
{
	unsigned long int num1 = 1, num2 = 2, res;
	int i;

	printf("%lu, %lu", num1, num2);

	for (i = 2; i < 50; i++)
	{
		res = num1 + num2;
		printf(", %lu", res);

		num1 = num2;
		num2 = res;
	}
	putchar('\n');
	return (0);
}
