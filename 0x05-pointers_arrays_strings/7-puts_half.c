#include "main.h"

/**
 * puts_half -Prints half of a string.
 *
 * @str: String to print.
 *
 * Return: Half string.
 *
 */

void puts_half(char *str)
{
	int a, n, longi;

	for (a = 0; str[a] != '\0'; a++)
		longi++;
	n = longi / 2;

	if (longi % 2 == 0)
		n((longi + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
