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
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i <= 26; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
