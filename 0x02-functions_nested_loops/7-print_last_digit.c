#include "main.h"

/**
 * print_last_digit - Print last digit of a number.
 *
 * @n: Input number as an integer.
 *
 * Return: Last digit.
 *
 */

int print_last_digit(int n)
{
	int j;

	j = n % 10;
	if  (j < 0)
	{
		_putchar(-j + '0');
		return (-j);
	}
	else
	{
		_putchar(j + '0');
		return (j);
	}
}
