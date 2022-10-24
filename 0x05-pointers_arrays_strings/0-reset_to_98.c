#include "main.h"

/**
 * reset_to_98 - it takes a pointer to an int as parameter and updates
 * the value it points to 98
 *@n: points to 98
 */

void reset_to_98(int *n)
{
	int n = 98;
	int *p = &n;

	*p = 402;
}
