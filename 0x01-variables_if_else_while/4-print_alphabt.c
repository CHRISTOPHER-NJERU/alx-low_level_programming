#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - Print lowercase alphabets with exception of q and e.
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int lowercase = 'a';

	while (lowercase <= 'z')
	{
		if (lowercase == 'e' || lowercase == 'q')
		{
			lowercase += 1;
		}
		else
		{
			putchar (lowercase);
			lowercase += 1;
		}
	}
	putchar ('\n');
	return (0);
}
