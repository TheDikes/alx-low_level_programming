#include <stdio.h>
/**
 * main - Entry level
 *
 * Decription: 'I love coding'
 *
 * Return: hexadecimal code
 */
int main(void)
{
	int num, alpha; for (num = 48; num <= 58; num++)
		putchar(num);
	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
