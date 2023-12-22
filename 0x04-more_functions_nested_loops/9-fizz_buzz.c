#include <stdio.h>
/**
 * main - The entry point pf C program
 *
 * Description: This program prints numbers from 1 to 100. However,
 * - In case that the number is multiple of 3, It prints "Fizz"
 * - In case that the number is multiple of 5, It prints "Buzz"
 * - In case that the number is multiple of 3 and 5, It prints "FizzBuzz"
 *
 * Return: Always 0, success
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i != 100)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
