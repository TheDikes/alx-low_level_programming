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
	int i = 0, j;

	while (*dest)
		i += 1;

	for (j = 0; *src != '\0'; j++)
	{
		*dest = *src;
		i += 1;
	}
	*dest = '\0';

	return (dest);
}
