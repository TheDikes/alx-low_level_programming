#include "main.h"
/**
 * print_alphabet - Entry point for the program
 *
 * Description: prints the alphabet in lowercase
 *
 * Return: Always (0) success
 */
void print_alphabet(void)
{
	int alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha), alpha++;
	}
	_putchar('\n');
}
