#include "main.h"

/**
 * swap_int - Swap values of two int pointers.
 *
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
