#include "main.h"

/**
 * print_array - prints n elements of an array of integers.
 *
 * @a: array of integer.
 * @n:  number of elements of the array to be printed.
 *
 * Return: Array elements.
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
