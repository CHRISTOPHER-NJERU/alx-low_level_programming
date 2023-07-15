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
	int lowercase = 'a';
	int uppercase = 'A';
	while (lowercase <= 'z')
	{
		putchar (lowercase);
		lowercase += 1;
	}
	while (uppercase <= 'Z')
	{
		putchar (uppercase);
		uppercase += 1;
	}
	putchar ('\n');
	return (0);
}
