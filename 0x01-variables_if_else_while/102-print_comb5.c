#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always (0) success
 */
int main(void)
{
	int c, d; for (c = 0; c <= 98; ++c)
	{
		for (d = 0; d <= 99; ++d)
		{
			if (d > c)
			{
				putchar((c / 10) + '0');
				putchar((c % 10) + '0');
				putchar(' ');
				putchar((d / 10) + '0');
				putchar((d % 10) + '0');
				if (c != 98 || d != 99)
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
