#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Cynthia is a female Programmer
 */
int main(void)
{
	char Cynthia, Programmer;

	for (Cynthia = 'a'; Cynthia <= 'z'; ++Cynthia)
		putchar(Cynthia);
	for (Programmer = 'A'; Programmer <= 'Z'; ++Programmer)
		putchar(Programmer);
	putchar('\n');
	return (0);
}
