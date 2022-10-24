#include "main.h"
/**
 * main - it takes a pointer to an int as parameter and updates 
 * the value it points to 98
 *
 */

void reset_to_98(int *n)
{
	int n = 98;
	int *p = &n;

	*p = 402;
}
