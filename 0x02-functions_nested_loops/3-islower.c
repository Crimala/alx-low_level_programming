#include "main.h"

/**
 * _islower -  checks for lowercase character
 * @c: The character to be checked
 * Returns 1 if c is lowercase
 * Return: 0 Always
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
