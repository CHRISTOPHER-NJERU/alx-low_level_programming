#include <stdlib.h>
#include <time.h>
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
	char alphabet;

	for (num = 0; num < 10; num ++)
		putchar((num % 10) + '0')

	for (alphabet = 'a', alphabet <= 'f'; alphabet ++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
