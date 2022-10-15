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
	int num, alpha; for (num = '0'; num <= '9'; num++)
		putchar(num);
	for (alpha = 65; alpha <= 70; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
