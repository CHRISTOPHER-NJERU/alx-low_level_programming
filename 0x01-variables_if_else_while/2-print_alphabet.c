#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - prints the alphabet in lowercase.
 *
 * Return: Always 0 success
 */
int main(void)
{
	int lowercase = 'a';
	while (lowercase <= 'z')
	{
	putchar (lowercase);
	lowercase += 1;
	}
	putchar ('\n');
	return (0);
}
