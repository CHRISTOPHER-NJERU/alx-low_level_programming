#include "main.h"

/**
 * _isupper - Check for lowwercase letters.
 * @c: Character to check.
 *
 * Return: (1) if lowercase, else (0).
 *
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
