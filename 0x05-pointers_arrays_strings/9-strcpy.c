#include "main.h"

/**
 * char *_strcpy - copies the string pointed to by src.
 *
 * @dest: Where to copy string.
 * @src: From where to copy string.
 *
 * Return: Copied string.
 *
 */

char *_strcpy(char *dest, char *src)
{
	int l;
	int x;

	while ((*src + l) != '\0')
	{
		l++;
	}
	for ( ; x < 1; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}

