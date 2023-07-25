#include "main.h"

/**
 * swap_int(int *a, int *b) - Swap values of two int pointers.
 * @n: Integer value.
 * @a: First int pointer value.
 * @b: Second int pointer value.
 *
 * Return: void.
 *
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
