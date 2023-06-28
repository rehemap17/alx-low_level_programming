
#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @s: integer to swap
 * @t: integer to swap
 */
void swap_int(int *s, int *t)
{
	int m;

	m = *s;
	*s = *t;
	*t = m;
}
