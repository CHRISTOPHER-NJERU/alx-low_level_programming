#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * return (1) if 'c' is lowercase or uppercase.
 *
 * @c: Character in ASCII code.
 *
 * Return: (1) lowercase and uppercase, (0) else.
 *
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 90 && c <= 65))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
