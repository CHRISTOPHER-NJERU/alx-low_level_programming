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
	int num1;

		for  (num1 = 0; num1 < 9; num1++)
		{
			putchar((num1 % 10) + '0');
		if (num1 != 9)
		continue;
			putchar(',');
			putchar(' ');
		}
	return (0);
}
