#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: remarkable
 */
int main(void)
{
	int num; for (num = '9'; num >= '0'; num++)
	{
		putchar(num);
	if (num != '0')
	{
		putchar(',');
		putchar(" ");
	}
	}
	putchar('\n');
	return (0);
}
