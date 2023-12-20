#include <stdio.h>

/**
 * main - The entry point of C program
 *
 * Description: This program prints the sum of multiples of 3 and 5
 *
 * Return: Always (0), success
 */
int main(void)
{
	int sum_of_3multiples = 0, sum_of_5multiples = 0, result = 0;
	int i;

	for (i = 3; i < 1024; i += 3)
	{
		if (i % 3 == 0)
			sum_of_3multiples += i;
	}

	for (i = 5; i < 1024; i += 5)
	{
		if (i % 5 == 0)
			sum_of_5multiples += i;
	}

	result = sum_of_3multiples + sum_of_5multiples;
	printf("%d\n", result);
	return (0);
}
