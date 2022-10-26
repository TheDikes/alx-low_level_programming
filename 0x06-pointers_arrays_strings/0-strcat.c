#include "main.h"

/**
 * _strcat - it concatenates two strings
 * @dest: appends string to src
 * @src: appends string to dest
 *
 * Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	while (*dest != '\0')
		i++;

	for (; *src != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
