#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *main - Entry point
 *
 * Return: Always (0) success
 */
int main(void)
{
	int num;
		for (num = 0; num <= 9; num++)
		{
			putchar((num % 10) + '0');
		if (num == 9)
		{
			continue;
			putchar(',');
			putchar(' ');
		}
		}
	return (0);
}
