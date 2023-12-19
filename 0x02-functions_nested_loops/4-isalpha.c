#include "main.h"
/**
 * _isalpha - Checks if a given character is alphabet or not
 * @c: a given character to be checked
 *
 * Description: Checks if a given character is alphabet or not (lower or upper)
 *
 * Return: If alphabet => 1, Otherwise => 0
 */
int _isalpha(int c)
{
	short isAlpha = 0;

	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		isAlpha = 1;

	return (isAlpha);
}
