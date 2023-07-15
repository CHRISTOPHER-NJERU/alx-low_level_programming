#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - prints all single digit numbers of base 10 starting from 0. Using putchar.
 *
 * Return: Always (0) successful
 */

int main(void)
{
	int d = '0';

	while (d <= '9')
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}
