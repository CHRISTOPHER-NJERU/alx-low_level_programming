#include <stdlib.h>
#include <time.h>
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
	int n; 

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i; 
	for (i = 0; i <= 52; i++);
	{
		putchar (alp[52]);
	}
	putchar ('\n')
	return (0);
}
