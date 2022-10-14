#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: remarkable
 */
int main(void)
{
	int num, comma; for (num = '9'; num >= '0'; num++)
		putchar(num);
	for (comma = ','; comma >= ','; comma++)
		putchar(',');
	putchar(" ");
	putchar('\n');
	return (0);
}
