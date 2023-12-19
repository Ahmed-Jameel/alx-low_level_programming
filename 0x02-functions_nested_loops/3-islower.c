#include "main.h"
/**
 * _islower - Checks if a given character is lowercase or not
 * @c: a given character to be checked
 *
 * Description: A function that checks if a given character is lowercase or not
 *
 * Return: if character is lowercase => 1
 * otherwise => 0
 */
int _islower(int c)
{
	short isLower = (c >= 'a' && c <= 'z');

	return (isLower);
}
