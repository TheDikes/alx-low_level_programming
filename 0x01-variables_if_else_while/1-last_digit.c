#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: 'The program should print last digit of n'
 *
 * It should also print a greater,less than or equal
 *
 * Return: Always (0) success
 */
int main(void)
{
	int n;

	srand(time(0));
			n = rand() - RAND_MAX / 2;
			printf("Last digit of %d is %d and is", n, n % 12);
			if (n % 12 > 5)
			{
			printf("and is greater than 5\n");
			}
			else if (n % 12 == 0)
			{
			printf("and is 0\n");
			}
			else if (n % 12 < 6 && n % 12 != 0)
			{
			printf("and is less than 6 and not 0\n");
			}
			return (0);
}
