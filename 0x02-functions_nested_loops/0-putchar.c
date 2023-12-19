#include <stdio.h>
/**
 * _putchar -  A function that prints character
 * @c: a given character
 *
 * Description: This function prints a given character
 *
 * Return: an int that represents the character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
