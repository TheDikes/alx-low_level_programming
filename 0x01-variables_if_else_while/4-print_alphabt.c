#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: closing point
 */
int main(void)
{
	char Lowercase = 'a';
	while (Lowercase <= 'z')
	{
		if (Lowercase != 'e' && Lowercase != 'q')
		{
			putchar(Lowercase);
		}
		Lowercase++;
	}
	putchar('\n');
	return (0);
}	
