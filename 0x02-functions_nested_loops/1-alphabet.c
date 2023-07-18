#include "main.h"

/**
 * main - Print alphabets in lower case.
 *
 * Return: Always (0) success.
 *
 */

void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
