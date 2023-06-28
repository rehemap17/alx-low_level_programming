#include "main.h"
/**
 * print_rev - imprime en reversa
 * @o: string
 * return: 0
 */
void print_rev(char *o)
{
	int longi = 0;
	int o;

	while (*o != '\0')
	{
		longi++;
		o++;
	}
	o--;
	for (o = longi; o > 0; o--)
	{
		_putchar(*o);
		o--;
	}

	_putchar('\n');
}
