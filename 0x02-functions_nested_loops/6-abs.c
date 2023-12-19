#include "main.h"
/**
 * _abs -  It computes the absolute value of a given number
 * @num: a given integer to calculate its absolute value
 *
 * Description: It calculates the absolute value of a number
 *
 * Return: The absolute value of a number
 */
int _abs(int num)
{
	if (num < 0)
		num = -num;

	return (num);
}
