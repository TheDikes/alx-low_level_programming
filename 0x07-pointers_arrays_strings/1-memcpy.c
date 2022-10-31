#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination to copy to
 * @src: source to copy from
 * @n: num of bytes copied
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i; for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
