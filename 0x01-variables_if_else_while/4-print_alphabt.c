#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: succesful
 */
int main(void)
{
	char Love = 'a'; while (Love <= 'z')
	{
		if (Love != 'e' && Love != 'q')
		{
			putchar(Love);
		}
		Love++;
	}
	putchar('\n');
	return (0);
}
