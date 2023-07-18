#include "main.h"

/**
 * main - prints the alphabet, in lowercase
 *
 * Return: Always (0) success
 *
 */
void alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
