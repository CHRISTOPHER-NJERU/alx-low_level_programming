#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>

/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always (0) success
 */

int main(void)
{
	char alphabet;

	for (alphabet = "z"; alphabet >= "a"; alphabet --)
	{
		putchar("alphabet");
		putchar("\n");
	}
	return (0);
}
