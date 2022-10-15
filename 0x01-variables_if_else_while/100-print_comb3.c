#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints possible combination of two digits
 *
 * Return: Always (0) success
 */
int main(void)
{
	int n, m; for (n = '0'; n <= 8'; ++n)
	{
		for (m = '1'; m <= '9'; ++m)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != '8' || m != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
