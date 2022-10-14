#include <stdio.h>
/**
 * main - Entry level
 *
 * Result: hexadecimal code
 */
int main(void)
{
	int num, alpha; for (num = '0'; num <= '9'; num++)
		putchar(num);
	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
