#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - prints all single digit numbers of base 10 starting from 0. Using putchar.
 *
 * Return: Always (0) successful
 */
int main(void)
{
	int num;
	for (num = 0; num < 10; num += 1)
	{
		putchar((num % 10) + '0');
	}
	putchar("\n");
	return (0);
}
