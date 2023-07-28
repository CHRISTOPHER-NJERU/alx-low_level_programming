#include "main.h"

/**
 * print_square - Print a square of a give size.
 * @size: Size of square to print.
 *
 * Return: void.
 *
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
