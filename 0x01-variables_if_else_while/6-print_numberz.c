#include <stdlib.h>
#include <time.h>
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
	int i;

	for (i = 48; i < 58; i ++)
	{
		putchar(i);
	}
	putchar("\n");
	return (0);
}
