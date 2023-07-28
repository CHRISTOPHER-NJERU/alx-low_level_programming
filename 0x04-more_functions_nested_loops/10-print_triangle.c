#include "main.h"

/**
 * print_triangle -Prints a triangle
 *
 * @size: Size of trianle to print.
 *
 * Return: Treangle.
 *
 */

void print_triangle(int size)
{
	int i, j, k;
/*i is row, j is space, k is #*/
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= size; i++)
		{
			for (j = size - i;j--)
			{
				_putchar(' ');
			}
			for (k = 1; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}



