#include <stdio.h>
#include <stdiolib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: "This program should print positive,negative or zero"
 *
 * Return: (0) success
 */
int main(void)
{
	int n;

	srand(time(0));
			n = rand() - RAND_MAX / 2;
			if (n > 0)
			{
			printf("%d is positive\n", n);
			}
			else if (n < 0)
			{
			printf("%d is negative\n", n);
			}
			else
			{
			printf("%d is zero\n", n);
			}
			return (0);
}

