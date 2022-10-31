#include "main.h"
#include <stdio.h>

/**
 * _*strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle);
{
	int i, j; for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; *needle != '\0'; j++)
		{
			if (haystack[i + j] != *needle)
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}
