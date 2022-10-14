#include<stdio.h>
/**
 * main - Entry point
 *
 * Lowercase letters
 */
int main(void)
{
	char Lowercase; 
		
		for (Lowercase = 'a'; Lowercase <= 'z'; ++Lowercase) 
		{
			if (Lowercase != 'e' && Lowercase != 'q') 
			{
				putchar(Lowercase);
			}
			putchar('\n');
			return (0);
		}
}
		
