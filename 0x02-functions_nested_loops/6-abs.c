#include <stdio.h>
#include "main.h"

/**
 * _abs - prints the absolute value of an integer
 * @n: to check
 * Return: the absolute value of int
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);
}
