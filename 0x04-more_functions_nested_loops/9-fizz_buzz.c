#include "main.h"
#include <stdio.h>

/**
 * main - prints numbers to 100, with fizz-/3, Buzz-/5, FizzBuzz-/15.
 *
 * Return: (0) success.
 *
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 15 == 0)
			printf("FizzBuzz");
		else if (num % 5 == 0)
			printf("Buzz");
		else if (num % 3 == 0)
			printf("Fizz");
		else
			printf("%d", num);
		if (num < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
