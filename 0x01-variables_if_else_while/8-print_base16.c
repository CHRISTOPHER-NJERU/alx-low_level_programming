#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always (0) success
 *
 */

int main(void)
{
	int num;
	char alph;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
	}
	for (alph = 'a'; alph <= 'f'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
