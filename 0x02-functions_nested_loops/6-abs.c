#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 *
 * @i: Input the number as an integer.
 *
 * Return: Value of integer.
 *
 */

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}

