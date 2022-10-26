#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (*dest != '\0')
		i++;

	for (j = 0; *src != '\0' && j < 0; j++)
	{
		*dest = *src;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
