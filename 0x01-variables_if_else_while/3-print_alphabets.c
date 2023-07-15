#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alphabet;
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar ('\n');
	return (0);
}
