#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabets 10 times.
 *
 * Return: Always (0) success.
 *
 */
void print_alphabet_x10(void)
{
	int num;
	int letter;

	for (num = 0; num < 10; num++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
