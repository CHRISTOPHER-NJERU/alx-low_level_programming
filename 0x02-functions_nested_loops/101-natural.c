#include <stdio.h>

/**
 * main - list all the natural numbers below 10 that are multiples of 3 or 5.
 *
 * Return: Always (0) success.
 *
 */

int main(void)
{
	int i, j = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			j += 1;
		}
		i++;
	}
	printf("%d\n", j);
	return (0);
}

