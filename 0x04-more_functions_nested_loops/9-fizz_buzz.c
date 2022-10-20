#include <stdio.h>
#include "main.h"
/**
 * main - Entry point for the program fizzbuzz test
 * Return: Always (0) success
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf(" Fizz");
		} else if (i % 5 == 0)
		{
			printf(" Buzz");
		} else if (i % 15 == 0)
		{
			printf(" FizzBuzz");
		} else if (i == 1)
		{
			printf("%d", i);
		} else
		{
			printf(" %d", i);
		}
	}
	printf("\n");
	return (0);
}
