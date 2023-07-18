#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98.
 *
 * @n: Number to start printing from.
 *
 * Return: (0) success.
 *
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				_putchar((n % 10) + '0');
				_putchar('\n');
				break;
			}
			else
			{
				_putchar((n % 10) + '0');
			}
		}
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				_putchar((n % 10) + '0');
				_putchar('\n');
				break;
			}
			else
			{
				_putchar((n % 10) + '0');
			}
		}
	}
}
